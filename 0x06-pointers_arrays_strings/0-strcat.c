#include "main.h"
#include <string.h>

/**
 * _strcat - joins two strings together
 *
 * @src: param2
 * @dest: param1
 * Return: two combined strings
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (ptr);
}
