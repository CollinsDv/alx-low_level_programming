#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenated s2 to s1 in n bites
 * @s1: string 1
 * @s2: string 2
 * @n: size of bytes to add from s2
 * Return: pointer or NULL value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + n;
	pointer = malloc(sizeof(*pointer) * (len + 1));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		pointer[i] = s2[j];
		i++;
	}

	pointer[i] = '\0';

	return (pointer);
}
