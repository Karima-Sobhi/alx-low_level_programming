#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times.
 *
 */
void print_alphabet_x10(void)
{
	int n = 10;

	while (n--)
	{
		char ch = 'a';
		int n = 26;

		while (n--)
		{
			_putchar(ch++);
		}
		_putchar('\n');
	}
}
