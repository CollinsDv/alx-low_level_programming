#include "hash_tables.h"

/*
 * key_index - return the index of a key
 *
 * @key: the key of interest
 * @size: size of the table
 *
 * Return: the index location in the hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	if (index > size)
	{
		dprintf(2, "index out of range\n");
		exit(EXIT_FAILURE);
	}
	return (index);
}
