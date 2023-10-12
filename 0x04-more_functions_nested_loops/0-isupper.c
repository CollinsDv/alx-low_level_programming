#include "main.h"
/**
 * _isupper - Determines case of an input
 *
 * @c: arguement 1
 * Return: 1 for uppercase, 2 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
