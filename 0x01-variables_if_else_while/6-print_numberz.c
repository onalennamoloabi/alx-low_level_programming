#include <stdio.h>
/**
 * main - Entry point*
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit < 10; digit++)
	putchar(digit + '0');
	putchar('\n');

	return (0);
}
