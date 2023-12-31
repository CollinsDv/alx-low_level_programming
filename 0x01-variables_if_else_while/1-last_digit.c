#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checks the value of last digit of a variable
 *
 * Return: the number to be printed within certain
 * contraints
 */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;

	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	else if (s != 0 && s < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	else
		printf("Last digit of %d is %d and is 0\n", n, s);
	return (0);
}
