#include "main.h"

/**
 * print_triangle - prints a triangle of length n
 *
 * @size: param1
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int row, space, hash;

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space < size - row; space++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
