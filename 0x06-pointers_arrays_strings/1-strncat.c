#include "main.h"

/**
 * _strncat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * it will use at most n bytes from src;
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string that will returned.
 * @src: string to be appended.
 * @n: number of chars to be copied
 * Return:  a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i, j;

	while (dest[len] != '\0')
		len++;

	i = len;
	j = 0;

	while (j < n, src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
