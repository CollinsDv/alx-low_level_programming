#include <stddef.h>
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
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}