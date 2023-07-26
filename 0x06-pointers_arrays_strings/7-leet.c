#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: a string
 */
char *leet(char *str)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
