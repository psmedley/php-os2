set LIBS=-L/openldap/lib -lpthread -lldap -llber -lssl -lcrypto -lz -lexpat -lssh2 -lgcrypt -lgpg-error  -lbz2 -llzma -lcx -lidn -lssp
set LDFLAGS=-Zmap -Zhigh-mem -static-libgcc
rem -ldb2cli -ldb2api
rem set GCCOPT=-static-libgcc
set ld=ld.exe
dash ./configure.sh
