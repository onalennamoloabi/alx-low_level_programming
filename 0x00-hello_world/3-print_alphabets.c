#include <stdio.h>
/**
 *
 * main - prints the alphabet in lower and upper case
 * return: 0
 */

int main() 
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	
	putchar('\n');

    return (0);
}

