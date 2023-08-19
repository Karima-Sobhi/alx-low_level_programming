#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * format_char - ...
 * @separator: ...
 * @ptr: ...
 */

void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}


/**
 * format_int - ...
 * @separator: ...
 * @ptr: ...
 */

void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}


/**
 * format_float - ...
 * @separator: ...
 * @ptr: ...
 */

void format_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}


/**
 * format_string - ...
 * @separator: ...
 * @ptr: ...
 */

void format_string(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - function that prints anything.
 * @format: ...
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"s", format_string},
		{"f", format_float},
		{NULL, NULL}
	};
	char *sep = "";
	va_list list;

	va_start(list, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
