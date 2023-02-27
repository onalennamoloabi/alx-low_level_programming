#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: result
 */
int _atoi(char *s)
{
	int result = 0, sign = 1;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
	{
		sign = -1;
	}
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
