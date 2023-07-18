#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int table9 = 0, n = 0;

	while (table9 < 9)
	{
		n = table9 * 9;
		_putchar(n + '0');
		table9++;
	}

}
