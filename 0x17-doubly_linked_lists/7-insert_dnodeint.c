#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at idx
 *
 * @h: doubly linked list head node
 * @idx: index position
 * @n: data to input in list
 *
 * Return: updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int count = 0, size = dlistint_len(*h);

	if (idx > size - 1)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		dprintf(2, "ERROR: malloc error\n");
		return (NULL);
	}
	new_node->n = n;
	while (count < idx)
	{
		temp = temp->next;
		count++;
	}
	if (temp->prev == NULL)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (temp != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (temp);
	}
	else if (temp->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
		return (temp->next);
	}
	else
	{
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (temp->prev);
	}
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
