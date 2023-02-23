#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 *@n: the number of times that _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
