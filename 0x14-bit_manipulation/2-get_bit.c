#include "main.h"

/**
 * get_bit - gets the value of a bit in a certain index
 *
 * @n: the number
 * @index: index position
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (n == 0)
		return (0);

	x = x << index;

	if (n & x)
		return (1);
	else
		return (0);
}
