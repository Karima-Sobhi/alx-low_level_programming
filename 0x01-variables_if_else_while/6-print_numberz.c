#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		/* same as putchar(n+'0'); */
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
