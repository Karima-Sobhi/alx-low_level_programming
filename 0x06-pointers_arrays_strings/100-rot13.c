#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0, j = 0;

	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 2 * 26; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
