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

	if (separator == NULL || n == 0)
		return;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		elem = va_arg(ptr, int);
		if (i < (n - 1))
			printf("%d %c", elem, *separator);
	}
	printf("%d\n", elem);
}
