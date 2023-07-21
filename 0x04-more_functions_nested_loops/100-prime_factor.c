#include <stdio.h>

/**
 * main - entry point of the program.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143, i, maxPrime = 0;

	for (i = 3; i * i < n; i += 2)
	{
		while (n % i == 0)
		{
			if (i > maxPrime)
				maxPrime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		if (n > maxPrime)
			maxPrime = n;
	}
	printf("%lu\n", maxPrime);
	return (0);
}
