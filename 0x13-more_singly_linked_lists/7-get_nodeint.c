#include "lists.h"

/**
 * get_nodeint_at_index - gets a pointer at an index
 *
 * @head: head node
 * @index: index of node to be printed
 *
 * Return: pointer to the node to be printed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexptr;
	unsigned int i;

	indexptr = NULL;

	if (head == NULL)
		return (NULL);

	indexptr = head;
	i = 0;
	while (i < index)
	{
		if (indexptr == NULL)
			return (NULL);
		indexptr = indexptr->next;
		i++;
	}
	return (indexptr);
}
