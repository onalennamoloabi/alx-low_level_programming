#include "main.h"
/**
 * print_numbers - prints the single digit numbers, then a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
