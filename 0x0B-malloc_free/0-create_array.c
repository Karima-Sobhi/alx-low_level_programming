#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: charcter to be allocated
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i, s;

	if (size == 0)
		return (0);

	ar = (char *)malloc(sizeof(char) * size);

	if (ar == NULL)
		return (0);

	i = 0;
	s = size;
	while (s--)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
