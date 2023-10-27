#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * Description: doesn't need another compilation to read
 * new program name
 * @argc: param1
 * @argv: array of charater pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
