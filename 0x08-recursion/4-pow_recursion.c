#include "main.h"

/**
 * _pow_recursion - get a power of a digit x exponential y
 * @x: base value
 * @y: exponential value
 * Return: interger of result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
