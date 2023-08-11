#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concate
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n > len2)
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	/**
	 * if n < len2
	 */
	while ((i < (len1 + n)) && (n < len2))
		s[i++] = s2[j++];
	/**
	 * Concatenate the remaining characters from the second
	 * input string (s2) if n >= len2
	 */
	while ((n >= len2) && (i < (len1 + len2)))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
