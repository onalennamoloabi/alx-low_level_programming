#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 * Return: 0(SUCCESS)
 */
void rev_string(char *s)
{
	char *start;
	char *end;
	char m;
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	start = s;
	end = s + len - 1;

	while (start < end)
	{
		m = *start;
		*start = *end;
		*end = m;
		start++;
		end--;
	}
}
