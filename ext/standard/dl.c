/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Brian Schaffner <brian@tool.net>                            |
   |          Shane Caraveo <shane@caraveo.com>                           |
   |          Zeev Suraski <zeev@php.net>                                 |
   +----------------------------------------------------------------------+
*/

#ifdef __OS2__				// 2022-05-10 SHL extended LIBPATH support
#define INCL_DOSMISC			// DosQueryExtLIBPATH DosSetExtLIBPATH
#include <os2.h>
#endif

#include "php.h"
#include "dl.h"
#include "php_globals.h"
#include "php_ini.h"
#include "ext/standard/info.h"

#include "SAPI.h"

#ifdef HAVE_LIBDL
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef PHP_WIN32
#include "win32/param.h"
#include "win32/winutil.h"
#define GET_DL_ERROR()	php_win_err()
#else
#include <sys/param.h>
#define GET_DL_ERROR()	DL_ERROR()
#endif
#endif /* defined(HAVE_LIBDL) */

/* {{{ Load a PHP extension at runtime */
PHPAPI PHP_FUNCTION(dl)
{
	char *filename;
	size_t filename_len;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STRING(filename, filename_len)
	ZEND_PARSE_PARAMETERS_END();

	if (!PG(enable_dl)) {
		php_error_docref(NULL, E_WARNING, "Dynamically loaded extensions aren't enabled");
		RETURN_FALSE;
	}

	if (filename_len >= MAXPATHLEN) {
		php_error_docref(NULL, E_WARNING, "Filename exceeds the maximum allowed length of %d characters", MAXPATHLEN);
		RETURN_FALSE;
	}

#if ZEND_RC_DEBUG
	bool orig_rc_debug = zend_rc_debug;
	/* FIXME: Loading extensions during the request breaks some invariants. In
	 * particular, it will create persistent interned strings, which is not
	 * allowed at this stage. */
	zend_rc_debug = false;
#endif

	php_dl(filename, MODULE_TEMPORARY, return_value, 0);
	if (Z_TYPE_P(return_value) == IS_TRUE) {
		EG(full_tables_cleanup) = 1;
	}

#if ZEND_RC_DEBUG
	zend_rc_debug = orig_rc_debug;
#endif
}
/* }}} */

#ifdef HAVE_LIBDL

/* {{{ php_load_shlib */
PHPAPI void *php_load_shlib(const char *path, char **errp)
{
	void *handle;
	const char *err;		// 2022-05-10 SHL suppress warning

	handle = DL_LOAD(path);
	if (!handle) {
		err = GET_DL_ERROR();
#ifdef PHP_WIN32
		if (err && (*err)) {
			size_t i = strlen(err);
			(*errp)=estrdup(err);
			php_win32_error_msg_free(err);
			while (i > 0 && isspace((*errp)[i-1])) { (*errp)[i-1] = '\0'; i--; }
		} else {
			(*errp) = estrdup("<No message>");
		}
#else
		(*errp) = estrdup(err);
		GET_DL_ERROR(); /* free the buffer storing the error */
#endif
	}
	return handle;
}
/* }}} */

#ifdef __OS2__			  // 2022-05-09 SHL
/**
 * Add extension directory to BEGINLIBPATH
 * @returns nothing because caller does not care
 */
static void update_beginlibpath(const char *extension_dir)
{
	#define BLP_BUF_BYTES	((unsigned int)1024)		/* Kernel limit */
	char beginlibpath[BLP_BUF_BYTES];
	char dir[CCHMAXPATH];
	char *p;
	APIRET apiret;
	int old_blp_len;
	int new_blp_len;

	/* Assume length non-zero because checked by caller */
	new_blp_len = strlen(extension_dir);
	if (new_blp_len >= BLP_BUF_BYTES) {
		php_error_docref(NULL, E_ERROR,
				"extension_dir length (%u) exceeds %u maximum ", new_blp_len, BLP_BUF_BYTES -1);
		return;
	}

	strcpy(dir, extension_dir);
	/* Map to DOS slashes to match kernel */
	for (p = strchr(dir, '/'); p; p = strchr(p, '/'))
		*p = '\\';

	/* Chop trailing slash to keep kernel happy unless root */
	p = dir + new_blp_len - 1;
	if (*p == '\\' && p > dir && *(p - 1) != ':') {
		*p = 0;
		new_blp_len--;
	}

	apiret = DosQueryExtLIBPATH((PCSZ)beginlibpath, BEGIN_LIBPATH);
	if (apiret != 0) {
		php_error_docref(NULL, E_ERROR,
				"update_beginlibpath DosQueryExtLIBPATH failed with error %lu", apiret);
		return;
	}

	p = strcasestr(beginlibpath, dir);
	if (p && (p == beginlibpath || *(p - 1) == ';')) {
	char* pend = p + strlen(dir);
	if (*pend == 0 || *pend == ';')
		return;		/* Already in BEGINLIBPATH */
	}

	static char suffix[] = ";%BEGINLIBPATH%";

	old_blp_len = strlen(beginlibpath);
	if (old_blp_len) {
		new_blp_len = (sizeof(suffix) - 1 > old_blp_len ? sizeof(suffix) - 1 : old_blp_len) + new_blp_len;
		if (new_blp_len >= BLP_BUF_BYTES) {
			php_error_docref(NULL, E_ERROR,
					"BEGINLIBPATH length (%u) exceeds %u maximum ", new_blp_len, BLP_BUF_BYTES - 1);
			return;		       		/* Give up if too long */
		}
	}

	strcpy(beginlibpath, dir);
	if (old_blp_len)
		strcat(beginlibpath, suffix);	/* Use shorthand notation to avoid need to format */

	apiret = DosSetExtLIBPATH((PCSZ)beginlibpath, BEGIN_LIBPATH);

	if (apiret != 0) {
		php_error_docref(NULL, E_ERROR,
				"update_beginlibpath DosSetExtLIBPATH failed with error %lu", apiret);
	}

	return;
}
#endif // __OS2__


/* {{{ php_load_extension */
PHPAPI int php_load_extension(const char *filename, int type, int start_now)
{
	void *handle;
	char *libpath;
	zend_module_entry *module_entry;
	zend_module_entry *(*get_module)(void);
	int error_type, slash_suffix = 0;
	char *extension_dir;
	char *err1, *err2;

	if (type == MODULE_PERSISTENT) {
		extension_dir = INI_STR("extension_dir");
	} else {
		extension_dir = PG(extension_dir);
	}

	if (type == MODULE_TEMPORARY) {
		error_type = E_WARNING;
	} else {
		error_type = E_CORE_WARNING;
	}

	/* Check if passed filename contains directory separators */
	if (strchr(filename, '/') != NULL || strchr(filename, DEFAULT_SLASH) != NULL) {
		/* Passing modules with full path is not supported for dynamically loaded extensions */
		if (type == MODULE_TEMPORARY) {
			php_error_docref(NULL, E_WARNING, "Temporary module name should contain only filename");
			return FAILURE;
		}
		libpath = estrdup(filename);
	} else if (extension_dir && extension_dir[0]) {
#ifdef __OS2__				// 2022-05-10 SHL support extended LIBPATH
		static int first = 1;
		if (first) {
			first = 0;
			update_beginlibpath(extension_dir);
		}
#endif
		slash_suffix = IS_SLASH(extension_dir[strlen(extension_dir)-1]);
		/* Try as filename first */
		if (slash_suffix) {
			spprintf(&libpath, 0, "%s%s", extension_dir, filename); /* SAFE */
		} else {
			spprintf(&libpath, 0, "%s%c%s", extension_dir, DEFAULT_SLASH, filename); /* SAFE */
		}
	} else {
		return FAILURE; /* Not full path given or extension_dir is not set */
	}

	handle = php_load_shlib(libpath, &err1);
	if (!handle) {
		/* Now, consider 'filename' as extension name and build file name */
		char *orig_libpath = libpath;

		if (slash_suffix) {
			spprintf(&libpath, 0, "%s" PHP_SHLIB_EXT_PREFIX "%s." PHP_SHLIB_SUFFIX, extension_dir, filename); /* SAFE */
		} else {
			spprintf(&libpath, 0, "%s%c" PHP_SHLIB_EXT_PREFIX "%s." PHP_SHLIB_SUFFIX, extension_dir, DEFAULT_SLASH, filename); /* SAFE */
		}

		handle = php_load_shlib(libpath, &err2);
		if (!handle) {
			php_error_docref(NULL, error_type, "Unable to load dynamic library '%s' (tried: %s (%s), %s (%s))",
				filename, orig_libpath, err1, libpath, err2);
			efree(orig_libpath);
			efree(err1);
			efree(libpath);
			efree(err2);
			return FAILURE;
		}
		efree(orig_libpath);
		efree(err1);
	}
	efree(libpath);

#ifdef PHP_WIN32
	if (!php_win32_image_compatible(handle, &err1)) {
			php_error_docref(NULL, error_type, err1);
			efree(err1);
			DL_UNLOAD(handle);
			return FAILURE;
	}
#endif

	get_module = (zend_module_entry *(*)(void)) DL_FETCH_SYMBOL(handle, "get_module");

	/* Some OS prepend _ to symbol names while their dynamic linker
	 * does not do that automatically. Thus we check manually for
	 * _get_module. */

	if (!get_module) {
		get_module = (zend_module_entry *(*)(void)) DL_FETCH_SYMBOL(handle, "_get_module");
	}

	if (!get_module) {
		if (DL_FETCH_SYMBOL(handle, "zend_extension_entry") || DL_FETCH_SYMBOL(handle, "_zend_extension_entry")) {
			DL_UNLOAD(handle);
			php_error_docref(NULL, error_type, "Invalid library (appears to be a Zend Extension, try loading using zend_extension=%s from php.ini)", filename);
			return FAILURE;
		}
		DL_UNLOAD(handle);
		php_error_docref(NULL, error_type, "Invalid library (maybe not a PHP library) '%s'", filename);
		return FAILURE;
	}
	module_entry = get_module();
	if (zend_hash_str_exists(&module_registry, module_entry->name, strlen(module_entry->name))) {
		zend_error(E_CORE_WARNING, "Module \"%s\" is already loaded", module_entry->name);
		DL_UNLOAD(handle);
		return FAILURE;
	}
	if (module_entry->zend_api != ZEND_MODULE_API_NO) {
			php_error_docref(NULL, error_type,
					"%s: Unable to initialize module\n"
					"Module compiled with module API=%d\n"
					"PHP    compiled with module API=%d\n"
					"These options need to match\n",
					module_entry->name, module_entry->zend_api, ZEND_MODULE_API_NO);
			DL_UNLOAD(handle);
			return FAILURE;
	}
	if(strcmp(module_entry->build_id, ZEND_MODULE_BUILD_ID)) {
		php_error_docref(NULL, error_type,
				"%s: Unable to initialize module\n"
				"Module compiled with build ID=%s\n"
				"PHP    compiled with build ID=%s\n"
				"These options need to match\n",
				module_entry->name, module_entry->build_id, ZEND_MODULE_BUILD_ID);
		DL_UNLOAD(handle);
		return FAILURE;
	}
	module_entry->type = type;
	module_entry->module_number = zend_next_free_module();
	module_entry->handle = handle;

	if ((module_entry = zend_register_module_ex(module_entry)) == NULL) {
		DL_UNLOAD(handle);
		return FAILURE;
	}

	if ((type == MODULE_TEMPORARY || start_now) && zend_startup_module_ex(module_entry) == FAILURE) {
		DL_UNLOAD(handle);
		return FAILURE;
	}

	if ((type == MODULE_TEMPORARY || start_now) && module_entry->request_startup_func) {
		if (module_entry->request_startup_func(type, module_entry->module_number) == FAILURE) {
			php_error_docref(NULL, error_type, "Unable to initialize module '%s'", module_entry->name);
			DL_UNLOAD(handle);
			return FAILURE;
		}
	}
	return SUCCESS;
}
/* }}} */

#else

static void php_dl_error(const char *filename)
{
	php_error_docref(NULL, E_WARNING, "Cannot dynamically load %s - dynamic modules are not supported", filename);
}

PHPAPI void *php_load_shlib(const char *path, char **errp)
{
	php_dl_error(path);
	(*errp) = estrdup("No DL support");
	return NULL;
}

PHPAPI int php_load_extension(const char *filename, int type, int start_now)
{
	php_dl_error(filename);

	return FAILURE;
}

#endif

/* {{{ php_dl */
PHPAPI void php_dl(const char *file, int type, zval *return_value, int start_now)
{
	/* Load extension */
	if (php_load_extension(file, type, start_now) == FAILURE) {
		RETVAL_FALSE;
	} else {
		RETVAL_TRUE;
	}
}
/* }}} */

PHP_MINFO_FUNCTION(dl)
{
#if defined(HAVE_LIBDL)
#define PHP_DL_SUPPORT_STATUS "enabled"
#else
#define PHP_DL_SUPPORT_STATUS "unavailable"
#endif
	php_info_print_table_row(2, "Dynamic Library Support", PHP_DL_SUPPORT_STATUS);
}
