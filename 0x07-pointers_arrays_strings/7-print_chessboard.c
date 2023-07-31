#include "main.h"
/**
 * print_chessboard - prints a chess board
 * @a: array input
 */
void print_chessboard(char (*a)[8])
{
	char *temp = &a[0][0];
	int i;

	for (i = 0; temp[i]; i++)
	{
		_putchar(temp[i]);
		if ((i + 1) % 8 == 0)
			_putchar('\n');
	}
}
