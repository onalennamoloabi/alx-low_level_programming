#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: points to the string to be iterated through
 * Return: pointer to the first appearance of char c or NULL if 
 * character not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
