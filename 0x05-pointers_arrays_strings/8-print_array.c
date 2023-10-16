#include <stdio.h>

/**
 * print_array - print a comma separated array
 * @a: param1
 * @n: param2
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
	}

	for (int i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
