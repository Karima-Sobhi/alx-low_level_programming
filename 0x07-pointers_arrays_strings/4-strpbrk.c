#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input charcter
 * @accept: input string
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;

		}
		s++;
	}
	return (0);
}
