#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - finds the index of the 1st occurrence
 * of a digit
 *
 * @array: array pointer
 * @size: array size
 * @cmp: function pointer
 * Return: int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, bool_val, count;

	if (array == NULL || cmp == NULL)
                return(0);

	if (size <= 0)
		return (-1);

	count = 0;

	for (i = 0; i < size; i++)
	{
		bool_val = cmp(array[i]);
		if (bool_val == 1)
			return (count);
		count++;
	}

	return (-1);
}
