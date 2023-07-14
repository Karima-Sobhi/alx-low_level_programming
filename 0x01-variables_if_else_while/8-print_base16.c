#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0, base16 = 16;

	while (base16--)
	{
		printf("%x", number);
		number++;
	}
	putchar('\n');
	return (0);
}
