#include "main.h"

/**
 * print_square - print a square of size n
 *
 * @size: param1
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		i = 0;

		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
