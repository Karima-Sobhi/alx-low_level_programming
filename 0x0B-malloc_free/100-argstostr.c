#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: pointer array
 */
char *argstostr(int ac, char **av)
{
	int total_len, i, index;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = 0;
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;
	str = malloc(sizeof(char) * total_len);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(&str[index], av[i]);
		index += strlen(av[i]);
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';
	return (str);
}
