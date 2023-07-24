#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: string input.
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		len--;
	}
}
