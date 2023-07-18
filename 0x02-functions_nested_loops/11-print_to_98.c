#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line.
 * @n: a number .
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}

			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

		}
	}
}
