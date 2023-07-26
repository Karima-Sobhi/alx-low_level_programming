#include "main.h"

/**
 * _strncpy - work exactly like strncpy
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be copied
 * Return: the destination after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int  i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
