#include "lists.h"

/**
 * listint_len - displays no. of elements in a linked listint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	while (!h)
	{
		++nodes;
		h = h->next;
	}
	return (nodes);
}
