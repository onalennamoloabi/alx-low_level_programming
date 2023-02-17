#include <stdlib.h>
#include <time.h>
/**
 *main - prints text dependent on conditions met by random values
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		print("%d is positive\n", n);
	return (0);

	else if (n == 0)
		print("%d is zero\n", n);
	return (0);

	else
		print("%d is negative\n");
	return (0);
}
