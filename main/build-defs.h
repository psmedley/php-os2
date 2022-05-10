/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " 'U:/dev/php-7-os2/configure'  '--prefix=/php7' '--includedir=/extras/include' '--with-xml=shared' '--disable-rpath' '--enable-ftp' '--enable-exif=shared' '--with-zlib=u:/extras' '--enable-gd=shared' '--with-gettext=shared' '--enable-mbstring=shared,all' '--disable-mbregex' '--with-curl=shared,u:/extras' '--with-mysql-sock=\socket\MySQL' '--with-mysqli=shared,mysqlnd' '--with-bz2=shared,u:/extras' '--with-pdo-mysql=shared,mysqlnd' '--includedir=u:/extras/include/apr-1' '--with-apxs2=/apache24/bin/apxs' '--with-unixODBC=shared,/unixodbc' '--enable-sockets' '--with-xsl=shared,/extras' '--with-zip=shared' '--with-iconv=shared' '--enable-soap' '--with-xmlrpc=shared,/extras' '--enable-bcmath' '--enable-calendar' '--enable-maintainer-zts' '--with-sqlite3' '--with-pdo-sqlite=shared' '--with-openssl=shared,u:/extras' '--with-tidy=shared,/extras' '--disable-phpdbg' '--disable-phpdbg-webhelper' '--disable-ipv6' '--with-pgsql=shared,u:/pgsql' '--with-pdo-pgsql=shared,u:/pgsql' '--with-readline=shared,/extras' '--with-jpeg=/extras' '--with-webp=/extras' '--with-freetype=/extras' '--enable-intl=shared' 'PKG_CONFIG_PATH=u:/extras/lib/pkgconfig;e:/usr/lib/pkgconfig' 'LDFLAGS=-Zmap -Zhigh-mem -static-libgcc' 'LIBS=-L/openldap/lib -lpthread -lldap -llber -lssl -lcrypto -lz -lexpat -lssh2 -lgcrypt -lgpg-error -lbz2 -llzma /extras/lib/iconv.a -lcx -lidn'"
#define PHP_ODBC_CFLAGS	"-I/unixodbc/include"
#define PHP_ODBC_LFLAGS		"-L/unixodbc/lib"
#define PHP_ODBC_LIBS		"-lodbc"
#define PHP_ODBC_TYPE		"unixODBC"
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"c:/tcpip/bin/sendmail.exe"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/php7/lib/php/extensions/no-debug-zts-20190902"
#define PHP_PREFIX              "/php7"
#define PHP_BINDIR              "/php7/bin"
#define PHP_SBINDIR             "/php7/sbin"
#define PHP_MANDIR              "/php7/php/man"
#define PHP_LIBDIR              "/php7/lib/php"
#define PHP_DATADIR             "/php7/share/php"
#define PHP_SYSCONFDIR          "/php7/etc"
#define PHP_LOCALSTATEDIR       "/php7/var"
#define PHP_CONFIG_FILE_PATH    "/php7/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
