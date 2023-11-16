#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	char *pointer;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	len = strlen(s1) + n;
	pointer = malloc(sizeof(*pointer) * (len + 1));
	
}
