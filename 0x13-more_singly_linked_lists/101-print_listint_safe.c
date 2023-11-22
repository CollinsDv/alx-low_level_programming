#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 *
 * @head: head node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	const listint_t *slow, *fast;

	if (head == NULL)
		return (98);

	slow = fast = head;
	nodes = 0;
	while (fast != NULL || fast->next != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (98);
	}
	while (slow != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
	}
	return (nodes);
}
