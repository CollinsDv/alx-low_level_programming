#include "main.h"
#include <string.h>

/**
 * puts2 - prints numbers from start and every other
 * @str: param1
 * Return: void
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
