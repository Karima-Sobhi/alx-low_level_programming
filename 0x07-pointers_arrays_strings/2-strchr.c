#include "main.h"

/**
 * _strchr - function strchr
 * @s: input
 * @c: input
 * Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
