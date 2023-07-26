#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b[n];
	int i, j;

	for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
		b[i] = a[j];

	for (i = 0; i < n; i++)
		a[i] = b[i];
}
