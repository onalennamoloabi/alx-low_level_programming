#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit and describes it
 *
 * Return 0 (SUCCESS)
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5);
	print("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (last_digit == 0);
	print("Last digit of %d is %d and is 0", n, last_digit);
	else(last_digit  < 6 && last_digit != 0);
	print("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);

	return (0);
}
