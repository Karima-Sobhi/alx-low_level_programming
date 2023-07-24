#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @des: the string to have the copied value
 * @src: the string would be coppied
 * Return: char * charcter array des
 */
char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		/* or we can do : */
		/* *des++ = *src++;*/
	}
	*dest = 0;
	return (saved);
}
