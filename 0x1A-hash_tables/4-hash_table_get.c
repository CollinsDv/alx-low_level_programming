#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value mapped to a key
 *
 * @ht: hash table
 * @key: key to get value
 *
 * Return: value associated with the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_table_s *current = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	if (current == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
