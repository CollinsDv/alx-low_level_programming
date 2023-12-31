#include <stdio.h>

/**
 * print_array - print a comma separated array
 * @a: param1
 * @n: param2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d,", a[i]);
		}
		else if (i > 0 && i < n - 2)
		{
			printf(" %d,", a[i]);
		}
		else
			printf(" %d", a[i]);
	}
}
