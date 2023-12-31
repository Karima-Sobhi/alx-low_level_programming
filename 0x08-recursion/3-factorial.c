#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: input number
 * Return: Factoial n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
