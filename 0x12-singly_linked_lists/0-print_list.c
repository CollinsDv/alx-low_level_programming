#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_s - structure data type
 * @str: string
 * @len: string len
 * @next: pointer to next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

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
		if (!h->str)
			printf("[0] (nil)");
		printf("%s", h->str);
		h = h->next;
	}
	return (nodes);
}
