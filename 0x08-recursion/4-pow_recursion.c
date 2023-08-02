#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to power of y
 * @x: input number
 * @y: input to be powerd
 * Return: X raised to power y
 */

int _pow_recursion(int x, int y)
{
	/**
	 * x = 1, y = 10
	 * ret 1 * 1 *1 *1 10 times
	 * x * x * x * x  while y not equal 0
	 */

	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * (_pow_recursion(x, y - 1)));
}
