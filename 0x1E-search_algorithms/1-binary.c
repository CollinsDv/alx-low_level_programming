#include "search_algos.h"

/**
 * binary_search - an implementation of the common binary search
 *                 algorithm
 *
 * @array: a sorted array in ascending order
 * @size: size of array
 * @value: value to be searched in array
 *
 * Return: index of value or NULL(-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int end, start, midpoint, i;

	if (array == NULL || size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		midpoint = floor((end + start) / 2);

		if (array[midpoint] == value)
			return (midpoint);
		else if (array[midpoint] < value)
			start = midpoint + 1;
		else
			end = midpoint - 1;
	}
	return (-1);
}
