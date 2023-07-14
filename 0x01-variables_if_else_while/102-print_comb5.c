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

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n2 > n1)
			{
				putchar(n1 / 10 + 48);
				putchar(n1 % 10 + 48);

				putchar(' ');

				putchar(n2 / 10 + 48);
				putchar(n2 % 10 + 48);

				if (n1 != 98 || n2 != 99)
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
