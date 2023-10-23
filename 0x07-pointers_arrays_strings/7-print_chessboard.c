#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: pointer to the 1st array elemet
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; count < 8; count++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[count][index]);
		}
		_putchar('\n');
	}
}
