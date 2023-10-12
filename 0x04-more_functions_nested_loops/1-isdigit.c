#include "main.h"

/**
 * _isdigit - looks if a value is a number
 * from 0 - 9
 *
 * @c: param1
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
