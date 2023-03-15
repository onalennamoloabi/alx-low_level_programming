#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments received by the program
 * @argv: points to the pointer to array of arguments
 * @argc: counts the number of arguments
 * Return: 0 (SUCCESS)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
