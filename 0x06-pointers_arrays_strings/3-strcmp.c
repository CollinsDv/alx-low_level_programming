#include "main.h"
/**
 * _strcmp - a funtion that compares two strings.
 *
 * @s1: param1
 * @s2: param2
 *
 * Return: if strings are equal,return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	if (*s1 == *s2)
		return (0);

	return (*s1 - *s2);
}
