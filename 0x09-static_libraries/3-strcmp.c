#include "main.h"

/**
 * _strcmp - compares two strings.
 * works exatly like strcmp.
 * @s1: first string
 * @s2: second string
 * Return: 0 in case of exact , -ve number if s1 < s2
 * and +ve if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}


	return (0);
}
