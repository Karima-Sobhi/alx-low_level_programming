#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line.
 * @n: a number .
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
	for (i = n; i >= 98; i--)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
