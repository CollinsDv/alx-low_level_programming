#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node at index
 *
 * @head: pointer to head node
 * @index: index to remove node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *node_to_remove = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	i = 0;
	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	node_to_remove = temp->next;

	if (node_to_remove == NULL)
	{
		free(temp);
		return (1);
	}
	else
		temp->next = node_to_remove->next;

	free(node_to_remove);
	return (1);
}
