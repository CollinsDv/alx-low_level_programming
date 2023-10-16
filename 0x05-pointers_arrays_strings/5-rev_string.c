#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i, len = strlen(s);

	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
