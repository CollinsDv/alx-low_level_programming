#include "main.h"

/**
 * main - calls print_alphabet
 *
 * Return: Suvess (0)
 */
int main(void)
{
	print_alphabet_x10();

	return (0);
}

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i,j;
	i = 0;

	while (i < 10)
	{
		j = 'a';
		
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');

		i++;
	}
}
