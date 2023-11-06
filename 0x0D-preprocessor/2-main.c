#include <stdio.h>
/**
 * programFile - finds the file name of compilation
 * Return: void
 */
void programFile(void)
{
	printf("%s\n", __FILE__);
}

/**
 * main - call the programFile function to print
 *        file name
 * Return: void
 */
int main(void)
{
	programFile();
	return (0);
}
