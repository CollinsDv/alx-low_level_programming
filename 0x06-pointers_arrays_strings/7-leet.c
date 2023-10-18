#include "main.h"
/**
 * leet - encodes a series of characters
 * @str: param1
 * Return: encoded string
 */

char *leet(char *str)
{
	char *letters = "AEOTLaeotl";

	char *replacements = "4307143071";

	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
