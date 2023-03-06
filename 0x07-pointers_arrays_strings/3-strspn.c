#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a null-terminated string
 * @accept: pointer to the string of characters
 * with valid bytes for the substring
 * Return: no. of bytes in initial s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				num++;
				break;
			}
		}
		if (*p == '\0')
		{
			return (num);
		}
	}
	return (num);
}
