#include "main.h"
/**
 * _sqrt_helper_func - finds the square root of a number
 * @number: number to square
 * @square_root: square root of the number
 * Return: square root of the number, -1 if none
 */
int _sqrt_helper_func(int number, int square_root)
{
	if ((square_root * square_root) == number)
	{
		return (square_root);
	}
	if (square_root == number / 2)
	{
		return (-1);
	}
	return (_sqrt_helper_func(number, square_root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number to be squared
 * Return: natural square root of n, -1 if n can't be squared
 */
int _sqrt_recursion(int n)
{
	int square_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_helper_func(n, square_root));
}
