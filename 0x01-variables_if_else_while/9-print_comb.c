#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base10 = 0;

	while (base10 < 10)
	{
		putchar(base10 + '0');
		if (base10 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		base10++;
	}
	putchar('\n');
	return (0);
}
