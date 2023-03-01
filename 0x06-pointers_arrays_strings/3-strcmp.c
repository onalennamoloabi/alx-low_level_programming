#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s: refers to the string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 (SUCCESS)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}