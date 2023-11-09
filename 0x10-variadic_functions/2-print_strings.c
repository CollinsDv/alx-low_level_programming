#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print a strings
 * @separator: separator element(s)
 * @n: number of variadic strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *string;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);

		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	_putchar('\n');

	va_end(ptr);
}
