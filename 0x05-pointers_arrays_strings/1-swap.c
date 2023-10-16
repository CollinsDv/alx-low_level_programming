#include "main.h"

/**
 * swap_int - swaps teo values in addresses
 *
 * @a: param1
 * @b: param2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	_putchar(*a);
	_putchar(*b);
}
