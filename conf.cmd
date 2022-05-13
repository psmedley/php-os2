set LIBS=-L/openldap/lib -lpthread -lldap -llber -lssl -lcrypto -lz -lexpat -lssh2 -lgcrypt -lgpg-error  -lbz2 -llzma /extras/lib/iconv.a -lcx -lidn
set LDFLAGS=-Zmap -Zhigh-mem -static-libgcc
rem -ldb2cli -ldb2api
SET LIBRARY_PATH=u:/extras/lib;U:/usr/lib;%LIBRARY_PATH%
rem set GCCOPT=-static-libgcc
set ld=ld.exe
dash ./configure.sh
copy u:\extras\bin\aplibtool.exe.php.high build\aplibtool.exe
copy u:\extras\lib\httpd24.a u:\extras\lib\httpd.a
copy u:\extras\lib\httpd24.lib u:\extras\lib\httpd.lib

rem HAVE_MMAP?
rem libphp7.la $(EXTRA_LIBS) to EXTRA_LDFLAGS 
rem -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1