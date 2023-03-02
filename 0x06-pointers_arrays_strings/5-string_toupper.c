#include "main.h"
/**
 * *string_toupper - changes all lowercase letters in a string to uppercase
 * @p: pointer to characters in the string to be iterated
 * Return: string with all uppercase letters
 */
char *string_toupper(char *p)
{
	char *start = p;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
			p++;
		}
	}
	return (start);
}
