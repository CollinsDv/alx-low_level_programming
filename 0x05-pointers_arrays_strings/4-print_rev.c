#include "main.h"
#include <string.h>
/**
 * print_rev - reverses a string and prints
 *
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int x, len = strlen(s);

	for (x = len - 1; x > 1; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
