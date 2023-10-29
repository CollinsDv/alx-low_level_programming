#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers

 * @argc: param1
 * @argv: param2
 *
 * Return: 0 or 1;
 */
int main(int argc, char *argv[])
{
        int i, sum;
        if (argc <= 1)
        {
                printf("0\n");
                return (0);
        }
        sum = 0;

        for (i = 1; i < argc; i++)
        {
                char *ptr;
                ptr = argv[i];

                while (*ptr != '\0')
                {
                        if (*ptr > '9' || *ptr < '0')
                        {
                                printf("Error\n");
                                return (1);
                        }
                        ptr++;
                }
                sum += atoi(argv[i]);
        }
        printf("sum is %d\n", sum);
        return (0);
}
