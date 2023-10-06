#include <stdio.h>

/**
 * main - takes and display upper and lowercase of alphabet
 *
 * Return: concatenated upper and lowercase alphabet letters
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		for (i = 'A'; i <= 'Z'; i++)
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}
