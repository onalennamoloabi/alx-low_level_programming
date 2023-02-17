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
		printf("%d is positive\n", n);
	return (0);

	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);

	else
		printf("%d is negative\n");
	return (0);
}
