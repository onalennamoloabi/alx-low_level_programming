#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @n: number to be checked
 * Return: absolute value of a number or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
