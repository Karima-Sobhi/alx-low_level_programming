#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *tempn = needle;
		char *temph = haystack;

		while (*temph == *tempn && *tempn != '\0')
		{
			tempn++;
			temph++;
		}
		if (*tempn == '\0')
			return (haystack);

		haystack++;
	}

	return (haystack);
}
