#include "function_pointers.h"

/**
 * int_index - pointer function
 * @array: an array passed
 * @size: size of array
 * @cmp: pointer function
 * Return: 0 or 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size  <= 0)
		return (-1);
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i])
				return (i);
			i++;
		}
	}
	return (-1);
}
