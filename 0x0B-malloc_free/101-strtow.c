#include <stdlib.h>
#include "main.h"

/**
 * wCount - function to count words in a string
 * @str: a string
 * Return: number of words
 */

int wCount(char *str)
{
	int n = 0, i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if ((str[i + 1] != ' ') && (str[i + 1] != '\0'))
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow -  function that splits a string into words.
 * @str: string input
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **w;
	int n, i = 0, j, wc = 0, k, a;

	if (str == NULL || str == "")
		return (NULL);
	n = wCount(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(sizeof(char *) * n);
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
				w[wc] = (char *)malloc(sizeof(char) * j + 1);
				if (w[wc] == NULL)
				{
					for (k = 0; k < wc; k++)
					{
						free(w[k]);
						free(w - 1);
						free(w);
					}
					return (NULL);
				}
				for (a = 0; a < j; a++)
					w[wc][a] = str[i + a];
				w[wc][a] = '\0';
				wc++;
				i += j;
		}
		else
			i++;
	}
	return (w);
}
