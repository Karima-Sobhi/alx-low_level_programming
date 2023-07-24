#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: an int
 */

int _atoi(char *s)
{
	int i = 0, sign = 0, number = 0, len = 0, digit;

	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			number = number * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (number);
}
