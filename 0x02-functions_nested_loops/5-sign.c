#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked.
 * Return: 1 and prints + if  greater than 0 ,
 * 0 and prints 0 if  0 , -1 and prints - if less than 0
 */
int print_sign(int n)
{
	if (n > 0 && n != 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
