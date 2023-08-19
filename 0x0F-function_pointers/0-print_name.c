#include "function_pointers.h"

/**
 * print_name - function pointer to print name
 * @name: name to print
 * @f: function pointer call
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
