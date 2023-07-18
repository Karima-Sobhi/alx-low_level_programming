#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int tables = 0, n = 0;

	while (tables <= 9)
	{
		int i;
		for (i = 0; i <= 9; i++)
		{
			n = tables * i;
			if (n > 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
				_putchar(n + '0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		tables++;
		_putchar('\n');
	}
}
