#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * *_strncat - concatenates two strings using at most
 * @n: bytes from src, which does not need to be
 * null-terminated if it contains n or more bytes
 * @src: source string to be concatenated
 * @dest: destination string to be concatenated
 * Return: pointer to to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
