#include <stdarg.h>

/**
 * sum_them_all - sums arguements of a variadic function
 * @n: number of args
 * Return: 0 or sum integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr; /* pointer to last variadic arguement*/

	if (n == 0)
		return (0);

	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
}
