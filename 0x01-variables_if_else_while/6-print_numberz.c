#include <stdio.h>
/**
 * main - prints all single digits of base 10 from 0
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	putchar(digit + '0');
	putchar('\n');

	return (0);
}
