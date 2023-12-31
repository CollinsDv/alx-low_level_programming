#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node pointer
 * @head: pointer to head node
 * @idx: index to add node in
 * @n: data to input into node member(n)
 *
 * Return: a pointer to the nth node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *new_node = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	i = 0;
	if (temp == NULL)
		*head = new_node;
	else if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
	}
	else
	{
		while (i < idx - 1)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			i++;
		}
		if (temp->next == NULL)
			temp->next = new_node;
		else
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}
	}
	return (new_node);
}
