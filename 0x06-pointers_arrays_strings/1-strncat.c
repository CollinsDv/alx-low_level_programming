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
	while (*ptr != '\0')
	{
		ptr++;
	}
	i = 0;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';

	return (dest);
}
