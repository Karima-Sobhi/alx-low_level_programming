#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of the block
 * Description: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
