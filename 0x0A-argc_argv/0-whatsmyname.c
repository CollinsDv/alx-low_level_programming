#include "main.h"

/**
 * main - a program that prints its name
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *ptr;

	for(; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			_putchar(*ptr);
			ptr++;
		}
	}
	_putchar('\n');
	return (0);
}
