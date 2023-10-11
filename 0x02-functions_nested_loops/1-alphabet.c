#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet - prints that alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
/**
 * main - calls the print_alphabet function
 *
 * Return: a value 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
