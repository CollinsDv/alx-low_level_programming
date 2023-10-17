#include <stdio.h>
/**
 * _strcpy - copy string to a buffer
 *
 * @dest: param1
 * @src: param2
 * Return: a character value
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_initial = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_initial);
}
