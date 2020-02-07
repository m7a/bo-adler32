#include <stdlib.h>
#include <stdio.h>

#include <zlib.h>

#define BUF 0x200

int main(int argc, char** argv)
{
	unsigned char buf[BUF];
	unsigned long adler = adler32(0, Z_NULL, 0);

	size_t len;
	while((len = fread(buf, sizeof(unsigned char), BUF, stdin)) != 0)
		adler = adler32(adler, buf, len);

	printf("0x%08lx\n", adler);
	return EXIT_SUCCESS;
}
