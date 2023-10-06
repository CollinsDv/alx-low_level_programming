#include <stdio.h>

/**
 * main - prints all single digit
 *
 * Return: single digit numbers of base 10 starting from 0
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");
	return (0);
}
