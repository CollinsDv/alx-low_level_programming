#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print a strings
 * @separator: separator element(s)
 * @n: number of variadic strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ap);
}
