#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates position of a character on a string
 * @s: pointer to an array
 * @c: character of interest
 * Return: a pointer or a NULL value
 */
char *_strchr(char *s, char c)
{
	int pointer;

	pointer = 0;
	while (s[pointer] != '\0')
	{
		if (s[pointer] == c)
			break;
		pointer++;
	}
	if (s[pointer] == '\0')
	{
		return (NULL);
	}
	return (&s[pointer]);
}
