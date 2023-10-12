#include "main.h"

/**
 * print_numbers - print digit 1 -10 in ASCII value
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
