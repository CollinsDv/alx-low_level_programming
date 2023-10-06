#include <stdio.h>

/**
 * main - accepts hexadecimal values and prints
 *
 * Return: Always 0
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex);
	}
		for (hex = 'a'; hex < 'g'; hex++)
		{
			putchar(hex);
		}
	putchar('\n');
	return (0);
}
