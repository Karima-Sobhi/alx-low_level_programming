#include "main.h"

/**
 * print_alphabet - function to print alphabets
 */
void print_alphabet(void)
{
	char ch = 'a';
	int n = 26;

	while (n--)
	{
		_putchar(ch++);
	}
	_putchar('\n');
}
