#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, k = 0;

		while (n--)
		{
			for (i = 0; i < k; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k += 1;
		}
	}
	else
		_putchar('\n');
}
