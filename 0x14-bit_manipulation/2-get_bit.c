#include "main.h"

/**
 * get_bit - a function that eturns the value of a bit at a given index.
 * @n: binary number
 * @index: index of a bit
 * Return: index or -1 (Erorr)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_size = sizeof(n) * 8;

	if (index >= bit_size)
		return (-1);
	return (n >> index & 1);
}
