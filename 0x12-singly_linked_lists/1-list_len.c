#include "lists.h"

/**
 * list_len - prints number of elements in a linked list
 * @h: list head
 * Return: integer or NULL
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	if (!h)
		return (0);

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
