#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 * Return: pointer to substring found or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
