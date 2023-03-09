#include "main.h"
#include <stddef.h>
/**
 * factorial - returns the factorial of a given number
 * @n: number to be considered
 * Return: -1 if n is lower than 0, 1 if n is 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
