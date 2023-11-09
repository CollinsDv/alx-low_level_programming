#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints all valid value input types
 * @format: pointer to a list of input arguements
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *string;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 's')
		{
			string = va_arg(args, char *);
			printf("%s", string);
		}
		i++;
	}
	va_end (args);
}
