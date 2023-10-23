#include "main.h"
#include <stddef.h>

/**
 * _strstr -  locates a substring.
 *
 * @haystack: param1
 * @needle: param2
 * Return: beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p = haystack;

		while (*needle == *haystack)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (p);
		}

		haystack++;
	}

	return (NULL);
}
