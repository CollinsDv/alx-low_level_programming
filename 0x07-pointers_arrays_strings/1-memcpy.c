#include "main.h"

/**
 * _memcpy - copies memory area value of bites n from src to dest
 *
 * @dest: destnation array
 * @src: source aray
 * @n: memory size of type int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] =  src[count];
	}
	return (dest);
}
