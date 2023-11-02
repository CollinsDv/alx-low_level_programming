#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - aloocates memory with malloc
 * @b: integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(sizeof(*pointer) * b);
	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}
	return (pointer);
}
