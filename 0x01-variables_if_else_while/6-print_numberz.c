#include <stdio.h>

/**
 * main - print numbers with putchar without
 * using char
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar(c + '0');

	putchar('\n');

	return (0);
}
