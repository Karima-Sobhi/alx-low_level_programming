#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	int n = 26;

	while (n--)
	{
		putchar(ch--);
	}
	putchar('\n');
	return (0);
}
