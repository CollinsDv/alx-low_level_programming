#include "main.h"

/**
 * _islower - sees if a value is lower case
 *
 * @c: interger value
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
