#include "main.h"

/**
 * _strncpy - copies a string to the other
 *
 * @dest: param1
 * @src: paam2
 * @n: param3
 * Return: copy of a string to another
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
