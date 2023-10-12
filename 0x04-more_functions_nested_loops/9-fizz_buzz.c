#include <stdio.h>

void fizz_buzz(void);
/**
 * main - outputs character series of fizz and buzzes
 *
 * Return: value success of 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints out fizz, buzz and characters
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", x);

		if (x == 100)
			continue;
		printf(" ");
	}
	printf("\n");
}
