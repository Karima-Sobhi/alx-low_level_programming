#include <stdio.h>

/**
 * main - entry function .
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long fib[52];
	int i;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i <= 51; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 2; i <= 51; i++)
	{
		printf("%lu", fib[i]);
		if (i == 51)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
