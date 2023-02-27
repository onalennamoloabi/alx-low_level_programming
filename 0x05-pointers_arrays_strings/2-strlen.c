#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer to the char of the string
 * The difference between is the length of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	const char *p = s;

	while (*p != '\0')
	{
	p++;
	}

	return (p - s);
}
