#include "search_algos.h"
#include <math.h>

/**
 * min - return min between two numbers
 *
 * @a: value 1
 * @b: value 2
 *
 * Return: a or b
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * jump_search - an implementation of jump search
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value of interest to be searched
 *
 * Return: index(success), -1(fail)
 */
int jump_search(int *array, size_t size, int value)
{
	int block, prev = 0;

	/* Define optimum block size */
	block = floor(sqrt(size));

	while (array[min(block, size)] < value && block < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = block;
		block += sqrt(size);

		/* Check if we've reached the end of the list */
		if (prev >= (int)size)
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, block);
	while (array[prev] < value && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == min(block, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	return (-1);
}
