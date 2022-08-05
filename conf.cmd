set LIBS=-L/openldap/lib -lpthread -lldap -llber -lssl -lcrypto -lz -lexpat -lssh2 -lgcrypt -lgpg-error  -lbz2 -llzma /extras/lib/iconv.a -lcx -lidn
set LDFLAGS=-Zmap -Zhigh-mem -static-libgcc
rem -ldb2cli -ldb2api
SET LIBRARY_PATH=u:/extras/lib;U:/usr/lib;%LIBRARY_PATH%
rem set GCCOPT=-static-libgcc
set ld=ld.exe
dash ./configure.sh
