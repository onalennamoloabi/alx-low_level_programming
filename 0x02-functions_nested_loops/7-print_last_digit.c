#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be considered
 * Return: value of the last digit of number
 */
int print_last_digit(int n)
{
	int lasdi;

	lasdi = n % 10;
	if (lasdi < 0)
	{
		lasdi *= -1;
	}
	_putchar(lasdi + '0');
	return (lasdi);
}
