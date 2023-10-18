#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @entry: input
 *
 * Return: capitalized string
 */
char *cap_string(char *entry)
{
	int conversion, indx, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (indx = 0; entry[indx] != '\0'; indx++)
	{
		if (entry[indx] >= 'indx' && entry[indx] <= 'z')
		{
			entry[indx] =  entry[indx] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[indx])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
