#include "main.h"
/**
 * main - prints the alphabet
 *
 * Return:0(SUCCESS)
 */
int print_alphabet(void)
{
	char c;
	for (c = 'a', c <= 'z', c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

