#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table and the hash_node pointers
 *
 * @size: size of the hash_table
 * 
 * @Return: A new hash_table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	/* create a hash_table pointer */
	hash_table_t *hash_table = malloc(sizeof(*hash_table));
	if (hash_table == NULL)
	{
		dprintf(2, "malloc error\n");
		exit(EXIT_FAILURE);
	}
	/* poputate data and create the hash_nodes */
	hash_table->size = size;
	hash_table->array = malloc(sizeof(*(hash_table->array)) * size);

	if (hash_table->array == NULL)
	{
		dprintf(2, "malloc error\n");
		exit(EXIT_FAILURE);
	}
	/* initialize the hash_node pointers to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
