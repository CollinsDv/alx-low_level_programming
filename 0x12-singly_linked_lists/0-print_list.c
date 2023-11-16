#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all elements in a linked list
 *
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	int len;

	if (h == NULL)
		return (0);

	nodes = 0;
	while (h)
	{
		nodes++;
		len = strlen(h->str);
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", len, h->str);
		h = h->next;
	}
	return (nodes + 1);
}
