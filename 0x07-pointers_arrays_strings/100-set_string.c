#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be set to a char
 * @to: char in question
 */
void set_string(char **s, char *to)
{
	*s = to;
}
