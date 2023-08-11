#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function to allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: array size
 * Return: a pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
