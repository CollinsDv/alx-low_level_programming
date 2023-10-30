#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - returns pointer to a characters
 *
 * @size: size of characters
 * @c: character
 * Return: a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	pointer = (char *)malloc(size * sizeof(char));
	if (*pointer == '\0') /*memory allocation validation*/
		return NULL;

	i = 0;
	while (i < size)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}
