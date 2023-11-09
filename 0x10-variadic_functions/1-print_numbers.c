#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number function
 * @separator: separates elements
 * @n: number of variadric args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, elem;
	va_list ptr;

	if (n == 0)
		return;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		elem = va_arg(ptr, int);
		printf("%d", elem);

		if ((i < (n - 1)) && (separator != NULL))
			printf("%c", *separator);
	}
	printf("\n");
}
