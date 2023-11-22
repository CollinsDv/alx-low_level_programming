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

	if (head == NULL)
		return (0);

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
