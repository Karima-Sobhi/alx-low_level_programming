#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 0 ; n1 < 8 ; n1++)
	{
		for (n2 = 1 ; n2 < 9 ; n2++)
		{
			for (n3 = 2 ; n3 < 10 ; n3++)
			{
				if (n2 > n1 && n3 > n2)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n1 != 7 || n2 != 8 || n3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
