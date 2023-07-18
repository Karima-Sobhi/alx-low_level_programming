#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: number to be calculated.
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		n = -n;
	}
	k = n % 10;
	_putchar(k + '0');
	return (k);

}
