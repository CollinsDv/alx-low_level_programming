#include <stdio.h>

/**
 *
 * main: takes and display lowercase characters except
 * e and q
 *
 * Return: lowercase alphabet letters without e and q
 */
int main(void)
{
        char i;

        for (i = 'a'; i <= 'z'; i++)
        {
                if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
        putchar('\n');
        return (0);
}
