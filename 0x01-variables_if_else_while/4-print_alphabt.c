#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a';
	int n = 26;

	while (n--)
	{
		if (ch1 != 'q' && ch1 != 'e')
			putchar(ch1++);
		else
			ch1++;
	}
	putchar('\n');
	return (0);
}
