#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * to the standard output
 * @str: the pointer to the string to be printed
 * Return: 0(SUCCESS)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
