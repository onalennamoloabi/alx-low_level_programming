#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to the memory area to be returned
 * @b: constant byte to fill the memory with
 * @n: unsigned integer indicates number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
