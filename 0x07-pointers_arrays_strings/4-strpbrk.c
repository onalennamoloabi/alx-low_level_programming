#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string through which to search
 * @accept: pointer to the string of bytes to search for
 * Return: pointer to the matching byte, or NULL if no matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *match;

	while (*s != '\0')
	{
		for (match = accept; *match != '\0'; match++)
		{
			if (*s == *match)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
