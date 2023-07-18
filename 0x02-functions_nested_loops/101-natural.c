#include <stdio.h>

/**
 * main - entry function.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n = 1023;
	int sum = 0;

	while (n--)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
