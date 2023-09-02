#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: ......
 * @index: index 
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
