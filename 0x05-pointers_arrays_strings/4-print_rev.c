#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be reversed.
 * 
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i != '\0'; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}