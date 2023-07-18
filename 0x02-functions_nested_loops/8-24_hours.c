#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	/* 00:00 to 23:59 */

	int i, j, k, a;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || i <= 2 && j <= 3)
			{
				for (k = 0; k <= 5; k++)
				{
					for (a = 0; a <= 9; a++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + a);
						_putchar('\n');
					}
				}
			}
		}
	}
}
