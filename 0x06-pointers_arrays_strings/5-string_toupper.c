#include "main.h"
/**
 * *string_toupper - changes all lowercase letters in a string to uppercase
 * @p: pointer to characters in the string to be iterated
 * Return: string with all uppercase letters
 */
char *string_toupper(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (p);
}
