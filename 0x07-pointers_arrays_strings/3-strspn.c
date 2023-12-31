#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment input.
 * @accept: input 2.
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
