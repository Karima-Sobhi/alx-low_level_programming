#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * Memory for the new string is obtained with malloc,
 * and can be freed with free
 * @str: string to be copied
 * Return: A pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);

	copy = (char *)malloc(strlen(str) + 1);
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	return (copy);
}
