#include <stdio.h>

/**
 * main -  prints out letter a - z
 *
 * Return: lowercase letters a - z
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
