#include "main.h"

/**
 * _memset - appends a character to first n bites of s
 *
 * @s: pointer to an array
 * @b: charater to append to s
 * @n: integer value
 * Return: a pointer address to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
