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
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--prefix=/php8' '--includedir=/extras/include' '--disable-rpath' '--enable-ftp=shared' '--enable-exif=shared' '--with-zlib=u:/extras' '--enable-gd=shared' '--with-gettext=shared' '--enable-mbstring=shared,all' '--disable-mbregex' '--with-curl=shared,/@unixroot/usr' '--with-mysql-sock=\socket\MySQL' '--with-mysqli=shared,mysqlnd' '--with-bz2=shared,/@unixroot/usr' '--with-pdo-mysql=shared,mysqlnd' '--includedir=u:/extras/include/apr-1' '--with-apxs2=/apache24/bin/apxs' '--with-unixODBC=shared,/unixodbc' '--enable-sockets=shared' '--with-xsl=shared,/@unixroot/usr' '--with-zip=shared,/@unixroot/usr' '--with-iconv=shared,/@unixroot/usr' '--enable-soap=shared' '--enable-bcmath' '--enable-calendar' '--enable-zts' '--with-sqlite3=shared' '--with-pdo-sqlite=shared' '--with-openssl=shared,/@unixroot/usr' '--with-tidy=shared,/extras' '--disable-phpdbg' '--disable-ipv6' '--with-pgsql=shared,u:/pgsql' '--with-pdo-pgsql=shared,u:/pgsql' '--with-readline=shared,/@unixroot/usr' '--with-jpeg=shared,/@unixroot/usr' '--with-webp=shared,/@unixroot/usr' '--with-freetype=shared,/@unixroot/usr' '--enable-intl=shared,/@unixroot/usr' '--with-sodium=shared,/@unixroot/usr' '--with-ffi=shared' '--enable-fileinfo=shared' '--with-gmp=shared' '--with-libxml=shared' 'PKG_CONFIG=pkg-config.exe' 'LIBS=-L/openldap/lib -lpthread -lldap -llber -lssl -lcrypto -lz -lexpat -lssh2 -lgcrypt -lgpg-error -lbz2 -llzma /extras/lib/iconv.a -lcx -lidn -lssp'"
#define PHP_ODBC_CFLAGS	"-I/unixodbc/include"
#define PHP_ODBC_LFLAGS		"-L/unixodbc/lib"
#define PHP_ODBC_LIBS		"-lodbc"
#define PHP_ODBC_TYPE		"unixODBC"
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"c:/tcpip/bin/sendmail.exe"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/php8/lib/php/extensions/no-debug-zts-20210902"
#define PHP_PREFIX              "/php8"
#define PHP_BINDIR              "/php8/bin"
#define PHP_SBINDIR             "/php8/sbin"
#define PHP_MANDIR              "/php8/php/man"
#define PHP_LIBDIR              "/php8/lib/php"
#define PHP_DATADIR             "/php8/share/php"
#define PHP_SYSCONFDIR          "/php8/etc"
#define PHP_LOCALSTATEDIR       "/php8/var"
#define PHP_CONFIG_FILE_PATH    "/php8/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "dll"
#define PHP_SHLIB_EXT_PREFIX    ""
