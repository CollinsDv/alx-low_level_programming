#include "main.h"
#include <string.h>

/**
 * binary_to_uint_rec - recursively obtains the string characters
 * and multiplies based on placevalue
 *
 * @b: pointer to binary string
 * @placevalue: place value
 * @len: element position
 *
 * Return: binary number
 */
unsigned int binary_to_uint_rec(const char *b, int placevalue, int len)
{
	unsigned int num, index;

	if (len < 1)
		return (0);

	index = len - 1;

	if (b[index] != '0' && b[index] != '1')
		return (0);
	num = (b[index] - '0') * placevalue +
		binary_to_uint_rec(b, placevalue * 2, len - 1);
	return (num);
}

/**
 * binary_to_uint - converts a number from binary to unsigned int
 *
 * @b: pointer to binary number
 *
 * Return: unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	if (len == 0)
		return (0);

	num = binary_to_uint_rec(b, 1, len);
	return (num);
}
