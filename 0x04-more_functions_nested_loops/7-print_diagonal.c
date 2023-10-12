#include "main.h"
/**
 * print_diagonal - prints diagonals of a certain number input
 * @n: param1
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	if (n < 0)
		n = 0

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}	
}
