#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all elements in a linked list
 *
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	nodes = 0;
	while (h)
	{
		nodes++;
		if (!str)
			printf("[0] (nil)");
		printf("%d", h->str);
		h = h->next;
	}
	return (nodes);
}
