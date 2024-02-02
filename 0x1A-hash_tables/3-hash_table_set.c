#include "hash_tables.h"

/**
 * hash_table_set - inserts an element into a hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: success 1 or error 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *current = NULL;

	if (key == NULL || value == NULL || ht == NULL || key[0] == '\0')
		return (0);
	/* generate hash code then feed it to key index func to obtain index */
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	/* generate the element */
	new = create_hash_node(key, value);

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * create_hash_node - create a hash_node item
 *
 * @key: key
 * @value: value
 *
 * Return: On success, a new hash_node item
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *hash_node = malloc(sizeof(*hash_node));

	if (hash_node == NULL)
	{
		dprintf(2, "malloc error\n");
		exit(EXIT_FAILURE);
	}
	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		perror("strdup error for key");
		free(hash_node);
		exit(EXIT_FAILURE);
	}
	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
	{
		perror("strdup error for value");
		free(hash_node->key);
		free(hash_node);
		exit(EXIT_FAILURE);
	}
	hash_node->next = NULL;

	return (hash_node);
}
