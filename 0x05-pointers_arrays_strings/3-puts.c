#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout
 * @str: param1
 * Return: void
 */

void _puts(char *str)
{
	int i, len = strlen(str);

	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
