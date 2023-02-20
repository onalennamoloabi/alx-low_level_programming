#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints all possible combinations of two-digit numbers
 *
 * return: 0
 */
int main() 
{
	int i, j;
    for (i = 0; i < 100; i++) {
        for (j = i; j < 100; j++) {
            int a = i / 10;
            int b = i % 10;
            int c = j / 10;
            int d = j % 10;
            putchar(a + '0');
            putchar(b + '0');
            putchar(' ');
            putchar(c + '0');
            putchar(d + '0');
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}

