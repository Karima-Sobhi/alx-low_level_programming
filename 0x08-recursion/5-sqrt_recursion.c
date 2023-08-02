#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt - recursive helper function for _sqrt_recursion
 * @n: number to calculate the sqaure root
 * @i: iterator number
 * Return: Square root of n
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: natural number
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}
