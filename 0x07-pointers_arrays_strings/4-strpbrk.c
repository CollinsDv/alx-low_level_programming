#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search string *accept for any of a set of bytes.
 *
 * @s: input string
 * @accept: source string
 * Return: Returns a pointer to an address or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, count;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[index])
			{
				return (&s[index]);
			}
		}
	}
	return (NULL);
}
