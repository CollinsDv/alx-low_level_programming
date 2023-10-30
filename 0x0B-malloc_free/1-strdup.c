#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: srting
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i;
	char *strarray;

	/*check if string is empty or NULL*/
	if (str == NULL)
		return (NULL);

	/*declared after above to prevent segmentation error*/
	int len = strlen(str);

	strarray = (char *)malloc((len + 1) * sizeof(char));

	if (strarray == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strarray[i] = str[i];
	}

	strarray[i] = '\0';
	return (strarray);
}
