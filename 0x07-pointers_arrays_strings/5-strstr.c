#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string input
 * @needle: substring input
 * Return: Pointer to the sub string
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
