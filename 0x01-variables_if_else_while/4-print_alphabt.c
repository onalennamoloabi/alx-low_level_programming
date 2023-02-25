#include <stdio.h>
/**
 * main - prints alphabet but not q and e
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
		{
			putchar(alphabt);
		}
	}
	putchar('\n');
	return (0);
}
