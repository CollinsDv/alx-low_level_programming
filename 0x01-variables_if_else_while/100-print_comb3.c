#include <stdio.h>

/**
 * main - The function prints out non repeated 
 * pair characters
 *
 * Return: non redundant paired integer values
 */
int main(void)
{
	char num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{	
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar(num1);
			putchar(num2);

			if (num1 == 9 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');	
	return (0);	
}
