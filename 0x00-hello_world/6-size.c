#include <stdio.h>
#include <stdint,h>
/**
 * main - the output is the sizes of all of the data types
 *
 * Return: 0
 */
int main(void)
{
	printf("char size(bytes): %zu\n", sizeof(char));
	printf("short size(bytes): %zu\n", sizeof(short));
	printf("int size(bytes): %zu\n", sizeof(int));
	printf("long size(bytes): %zu\n", sizeof(long));
	printf("long long size(bytes): %zu\n", sizeof(long long));
	printf("float size(bytes): %zu\n", sizeof(float));
	printf("double size(bytes): %zu\n", sizeof(double));
	printf("long double size (bytes): %zu\n", sizeof(long double));
	return (0);
}

