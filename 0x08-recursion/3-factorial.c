#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: number for factorial establishment
 * Return: an integer result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
