#include "hash_tables.h"

/**
 * key_index - return the index of a key
 *
 * @key: the key of interest
 * @size: size of the table
 *
 * Return: the index location in the hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
