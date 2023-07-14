#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0 ; n1 < 9 ; n1++)
	{
		for (n2 = 1 ; n2 < 10 ; n2++)
		{
			if (n2 > n1)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);

				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
