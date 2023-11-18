
all:
	gcc -DTEST evp_gcm.c -I/opt/homebrew/Cellar/openssl\@3/3.1.4/include/  /opt/homebrew/Cellar/openssl\@3/3.1.4/lib/libcrypto.dylib -o a
	#gcc evp_gcm.c -I/opt/homebrew/Cellar/openssl\@3/3.1.4/include/  /opt/homebrew/Cellar/openssl\@3/3.1.4/lib/libcrypto.a -o a
