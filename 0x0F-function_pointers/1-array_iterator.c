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
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
