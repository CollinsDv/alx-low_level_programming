#include "lists.h"

/**
 * print_listint - displays all elements in a listint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	while (!h)
	{
		++count;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
