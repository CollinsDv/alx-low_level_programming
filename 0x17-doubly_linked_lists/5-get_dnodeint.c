#include "lists.h"

/*
 * get_dnodeint_at_index - gets pointer at index
 *
 * @head: head node
 * @index: node index of interest
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	size_t size = dlistint_len(head), counter = 0;

	if (index > size - 1 || head == NULL)
		return (NULL);

	temp = head;
	while (counter < index)
	{
		temp = temp->next;
		counter++;
	}
	return (temp->prev->next);
}

/**
 * dlistint_len - return no. of elements of a list
 *
 * @h: head node pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t nodes = 0;

	if (!h)
		return (0);

	temp = h;
	while (temp)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
