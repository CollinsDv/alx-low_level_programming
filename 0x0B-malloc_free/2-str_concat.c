#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - returns a pointer with two joined strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2);
	pointer = (char *)malloc((len + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		pointer[i] = s2[j];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
