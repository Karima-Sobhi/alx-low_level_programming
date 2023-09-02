#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: ninary number
 * Return: integer number converted or zero in case of incorrect format
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int intNum = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		intNum = intNum * 2 + (b[i] - 48);
	}
	return (intNum);
}
