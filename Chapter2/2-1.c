#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("Range of char: %d, %d\n", CHAR_MIN, CHAR_MAX);
    printf("Size of unsigned char %u\n\n", UCHAR_MAX);

	printf("Range of int: %d, %d\n", INT_MIN, INT_MAX);
    printf("Size of unsigned int %u\n\n", UINT_MAX);

	printf("Range of short: %d, %d\n", SHRT_MIN, SHRT_MAX);
    printf("Size of unsigned short %u\n\n", USHRT_MAX);

	printf("Range of long: %ld, %ld\n", LONG_MIN, LONG_MAX);
    printf("Size of unsigned long %lu\n\n", ULONG_MAX);
}
