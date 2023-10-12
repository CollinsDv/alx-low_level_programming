#include "main.h"
/**
 * print_line - prints a straight line of length lines
 *
 * @c: param1
 * Return: void
 */
void print_line(int c)
{
	int i;
	int lines = c;

	for (i = 0; i < lines; i++)
		_putchar('_');

	_putchar('\n');
}
