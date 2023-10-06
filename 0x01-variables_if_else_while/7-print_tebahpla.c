#include <stdio.h>

/**
 * main - prints alphabet in a reverse order
 * with putchar
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
