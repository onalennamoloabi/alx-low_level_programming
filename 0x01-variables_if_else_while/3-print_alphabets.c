#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabet except q and e
 *
 * Return: 0
 */

int main(void)

{
	char alpha_lower, e, q;

	for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
	{
		if (alpha_lower != e && alpha_lower != q)
		{
			putchar(alpha_lower);
		}
	}
	putchar('\n');
		return (0);
}
