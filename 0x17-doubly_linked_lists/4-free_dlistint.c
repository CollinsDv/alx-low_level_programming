#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head node
 *
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return;

	temp = head;
	while (temp->next != NULL)
	{
		head = temp->next;
		head->prev = NULL;
		free(temp);
		temp = head;
	}
	free(temp);
}
