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
	void *pointer;

	if (b <= 0)
		exit(98);

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
