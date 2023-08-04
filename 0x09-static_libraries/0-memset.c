#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: the constant value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
