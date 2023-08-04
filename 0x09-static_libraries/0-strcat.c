#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: string that will returned.
 * @src: string to be appended.
 * Return:  a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i, j;

	while (dest[len] != '\0')
		len++;

	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
