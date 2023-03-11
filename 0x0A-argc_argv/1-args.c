#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: points to the array of arguments
 * Return: 0(SUCCESS)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
	i++;
	}
	printf("%d\n", i - 1);

	return (0);
}
