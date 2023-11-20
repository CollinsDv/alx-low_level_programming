#include "lists.h"

/**
 * free_listint2 - frees a pointer to a linked list listint_t
 *
 * @head - pointer to a head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp->next)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
	free(*head);
}
