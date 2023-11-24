#include "main.h"

/**
 * get_endianness - checks for endianess
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int mask = 1;

	if (2 & mask)
		return (1);
	return (0);
}
