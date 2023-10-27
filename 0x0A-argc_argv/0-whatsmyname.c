#include "main.h"

/**
 * main - a program that prints its name
 *
 * Return: 0
 */
int main(void)
{
	char *programfile = __file__; /*__FILE__ is a macro housing name of program*/

	while (*programfile != '\0')
		_putchar(*programfile);

	_putchar('\n');
	return (0);
}
