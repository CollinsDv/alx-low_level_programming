#include "main.h"

/**
 * _strlen_recursion - gets te length of a string
 *
 * @s: string index pointer to array
 * Return: an integer for length size
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
