#include "main.h"
/**
 * print_chessboard - Prints a chess board
 * @a: Array input
 */
void print_chessboard(char (*a)[8])
{
	char *temp = &a[0][0];
	int i;

	for (i = 0; i < 64; i++, *temp++)
	{
		_putchar(*temp);

		if ((i + 1) % 8 == 0)
			_putchar('\n');
	}
}
