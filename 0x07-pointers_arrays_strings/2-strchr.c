#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: input string s
 * @c: input char c
 * Return: pointer to the first occurrence of c.
 */
char *_strchr(char *s, char c)
{
	char *firstOcurance;

	while (*s != '\0')
	{
		if (*s == c)
		{
			firstOcurance = s;
			break;
		}
		s++;
	}

	return (firstOcurance);
}
