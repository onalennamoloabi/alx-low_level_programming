#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @src: string to be copied
 * @dest: string to be copied to
 * @n: max number of characters to be copied
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
