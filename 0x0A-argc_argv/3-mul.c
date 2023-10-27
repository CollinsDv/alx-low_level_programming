#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: param1
 * @argv: param2
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, multiply;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	multiply = 1;
	i = 1;
	while (i < argc)
	{
		multiply *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", multiply);
	return (0);
}
