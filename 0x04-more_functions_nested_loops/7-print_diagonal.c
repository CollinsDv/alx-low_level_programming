#include "main.h"
/**
 * print_diagonal - prints diagonals of a certain number input
 * @n: param1
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
