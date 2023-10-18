#include "main.h"

/**
 * _strncat - joins two strings
 *
 * Description: generally prints value of src
 * and places null termiator
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		ptr++;
	}
	i = 0;

	while (i < n && i != '\0')
	{
		*dest = *src;
		ptr++;
		src++;
	}
	if (i < n)
		*dest = '\0';

	return (ptr);
}
