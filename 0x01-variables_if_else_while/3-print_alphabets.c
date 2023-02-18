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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++);
	{
		if (alpha != 'e' && alpha != 'q');

		{
			putchar(alpha);
		}
	}

		for (alpha = 'A'; alpha <= 'Z'; alpha++);

		{
			if (apha != 'E' && alpha != 'Q');
			{
				putchar(alpha);
			}
		}
	putchar('\n');

		return (0);
}
