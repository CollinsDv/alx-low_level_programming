#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main: checks the value of last digit of a variable
 *
 * Return: the number to be printed within certain
 * contraints
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5)
	       printf("last digit of %d is greater than 5\n", n);
	else if ((n % 10) > 0 && (n % 10) < 6)
		printf("last digit of %d is less than 6 and not 0\n", n);
	else
		printf("last digit of %d is 0\n", n);
	return (0);
}
