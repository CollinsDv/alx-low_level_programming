#include "main.h"

void traverse(unsigned long int n);

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	traverse(n);
}

/**
 * traverse - a recursion of print_binary to obtain ones value
 * and print out
 * @n: number
 *.
 */
void traverse(unsigned long int n)
{
	if (n < 1)
		return;

	traverse(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
