#include "main.h"
/**
 * swap_int - swaps the values of 2 given variables
 * @a: Pointer to the first variable
 * @b: Pointer to the second variable
 * This function swaps the values of the integers
 * pointed to by @a and @b
 * Return: This function does not return a value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
