#include "main.h"

/**
 * _isalpha - checks if a character is uppercase or lowercase
 *
 * @c: parameter 1
 * Return: 0 or 1
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
