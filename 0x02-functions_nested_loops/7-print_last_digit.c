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

	n = abs(n);
	k = n % 10;
	_putchar(k + '0');
	return (k);

}
