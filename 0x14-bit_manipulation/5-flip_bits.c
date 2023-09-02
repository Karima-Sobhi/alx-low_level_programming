#include "main.h"

/**
 * flip_bits - counts the number of bits to change to
 * get from one number to another
 * @n: .........
 * @m: .....
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int i, count = 0;


	for (i = sizeof(n) * 8; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
