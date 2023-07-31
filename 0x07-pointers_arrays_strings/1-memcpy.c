#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: destination memory where is stored
 *@src: source of memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *saved = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (saved);
}
