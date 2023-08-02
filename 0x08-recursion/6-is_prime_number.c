#include "main.h"

int is_prime_number2(int n, int i);

/**
 * is_prime_number2 - helper function to check primes
 * @n: input number to check
 * @i: iterator
 * Return: 1 if prime , 0 otherwise
 */

int is_prime_number2(int n, int i)
{
	if ((n % i == 0) || (n % 2 == 0))
		return (0);
	if ((i >= n / 2) || (n == 2))
		return (1);
	return (is_prime_number2(n, i + 1));
}

/**
 * is_prime_number - check primes .
 * @n: input number
 * Return: 1 if prime , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number2(n, 3));
}
