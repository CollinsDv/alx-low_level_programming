#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter
 *
 * @array: pointer to array
 * @size:  size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
