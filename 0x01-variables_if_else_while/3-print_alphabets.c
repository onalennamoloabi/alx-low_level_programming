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
	char alpha_lower
	char alpha_upper

	for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++);
	{
		if (alpha_lower != 'e' && alpha_lower != 'q');
		{
			putchar(alpha_lower);
		}
	}

		for (alpha_upper = 'A'; alpha_upper <= 'Z'; alpha_upper++);
		{
			if (apha_upper != 'E' && alpha_upper != 'Q');
			{
				putchar(alpha_upper);
			}
		}
	putchar('\n');

		return (0);
}
