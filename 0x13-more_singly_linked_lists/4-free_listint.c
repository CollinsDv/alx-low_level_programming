#include "lists.h"

/**
 * free_listint - frees element of a linked list
 *
 * @head: head node pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
