#include "main.h"
/**
 * _memcpy - copies n byytes from one memory area to another
 * @n: number of bytes to be copied
 * @src: memory area to be copied
 * @dest: memory area to which src is copied
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
