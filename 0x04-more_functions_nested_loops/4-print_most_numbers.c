#include "main.h"

/**
 * print_most_numbers - print numbers with some exceptions
 *
 * Return: numbers 0 - 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_printchar(num - '0');
	}
	_putchar('\n');
}
