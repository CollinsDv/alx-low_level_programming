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
	const listint_t *temp = NULL;
	const listint_t *loop1 = head, *loop2 = head;

	if (head == NULL)
		return (98);
	while (loop1 != NULL || loop2 != NULL || loop2->next != NULL)
	{
		loop1 = loop1->next;
		loop2 = loop2->next->next;

		if (loop1 == loop2)
			exit(98);
	}

	nodes = 0;
	temp = head;
	while (temp != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}
	return (nodes);
}
