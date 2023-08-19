#include "function_pointers.h"

/**
 * array_iterator - pointer function
 * @array: pointer array
 * @size: size of array
 * @action: pointer function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		i = 0;
		while (i < size)
			action(array[i]);
	}
}
