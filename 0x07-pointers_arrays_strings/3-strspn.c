#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: an interger of similar character occurences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
		}
		if (accept[i] != s[j])
		{
			break;
		}
	}
	return (counter + 1);
}
