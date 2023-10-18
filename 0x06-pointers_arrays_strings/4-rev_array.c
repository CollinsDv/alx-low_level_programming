#include "main.h"

/**
 * reverse_array - function that reverses the of an array of
 * integers.
 *
 * @a: param1
 * @n: positions of array
 *
 */
void reverse_array(int *a, int n)
{
	int final, i;

	final = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		int start, end;

		start = a[i];
		end = a[final];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
