#include <stdio.h>
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a', ch2 = 'A';
	int n = 26;

	while (n--)
	{
		putchar(ch1++);
	}
	n = 26;
	while (n--)
	{
		putchar(ch2++);
	}
	putchar('\n');
	return (0);
}
