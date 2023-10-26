#include "main.h"
#include <string.h>

/**
 * compareIndex - compares two values in respective index
 * @indexFirst: 1st parameter
 * @indexLast: last index
 * Return: 0 or 1
 */
int compareIndex(char *indexFirst, char *indexLast)
{
	if (indexFirst >= indexLast) /*all values have been compared*/
		return (1);
	if (*indexFirst == *indexLast) /*test if values are equal*/
		return (compareIndex(indexFirst + 1, indexLast - 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
		return (1);

	return (compareIndex(s, s + strlen(s) - 1));
}
