#include "lists.h"

/**
 * reverse_listint - reverses a linked list using the node links
 *
 * @head: pointer to head
 *
 * Return: pointer to 1st node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	next_node = *head;
	while (next_node != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next_node;
	}
	return (temp);
}
