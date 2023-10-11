#include "main.h"
/**
 * get_string - gets character strings and prints
 *
 * Return: a void
 */
void get_string(void)
{
	char str[] = "_putchar";

	for (int i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * main - calls get_string function
 *
 * Return: 0 on success
 */
int main(void)
{
	get_string();

	return (0);
}
