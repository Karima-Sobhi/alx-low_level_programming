#include <stdio.h>

/**
 * main - entry function .
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long fib[52], sum = 0;
	int i;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i <= 51; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 2; i <= 51; i++)
	{
		if ((fib[i] % 2 == 0) || (sum <= 4000000))
		{
			sum += fib[i];
		}
	}
	printf("%lu\n", sum);
	return (0);
}
