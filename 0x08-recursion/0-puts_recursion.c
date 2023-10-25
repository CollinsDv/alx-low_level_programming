#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: index position in the array
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + 1);
}
