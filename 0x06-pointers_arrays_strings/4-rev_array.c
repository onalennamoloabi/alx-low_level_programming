#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: numb3r of elements in the array
 * @a: points to the array to be iterated
 * Return: 0(SUCCESS)
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
