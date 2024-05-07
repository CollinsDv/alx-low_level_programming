#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - implementation of linear search
 *
 * @array: array to be traversed
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index int or -1(not found)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	/* empty list check */
	if (array == NULL || size == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	/* no element found */
	return (-1);
}
