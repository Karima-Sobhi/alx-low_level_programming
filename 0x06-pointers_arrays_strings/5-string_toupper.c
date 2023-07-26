#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @k: pointer
 *
 * Return: n
 */

char *string_toupper(char *k)
{
	int i = 0;

	while (k[i] != '\0')
	{
		if (k[i] >= 'a' && k[i] <= 'z')
			k[i] -= 32;
		i++;
	}

	return (k);
}
