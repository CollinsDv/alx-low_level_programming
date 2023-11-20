#include "lists.h"

/**
 * free_listint2 - frees a pointer to a linked list listint_t
 *
 * @head - pointer to a head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next_node;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;
	while (temp->next != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
	free(next_node);
	*head = NULL;
}
