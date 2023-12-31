#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of argument
 * Return: sum of all function argument
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, sum;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
