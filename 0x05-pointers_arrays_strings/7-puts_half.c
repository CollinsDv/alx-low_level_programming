#include "main.h"
#include <string.h>

/**
 * puts_half - prints right half digit length
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i, index_one, len = strlen(str);

	if (len % 2 == 0)
		index_one = len / 2;
	else
		index_one = (len - 1) / 2;

	for (i = index_one; i < len; i++)
		_putchar(str[i]);
}
