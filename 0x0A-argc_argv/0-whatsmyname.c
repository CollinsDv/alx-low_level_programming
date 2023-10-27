#include "main.h"

/**
 * main - a program that prints its name
 *
 * Return: 0
 */
int main(void)
{
	char *programFile = __FILE__; /*macro housing program name and path*/

	while (*programFile != '\0')
	{
		_putchar(*programFile);
		programFile++;
	}
	_putchar('\n');
	return (0);
}
