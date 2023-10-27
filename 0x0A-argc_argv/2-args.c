#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: param1
 * @argv: param2
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("value at index[%d] is %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
