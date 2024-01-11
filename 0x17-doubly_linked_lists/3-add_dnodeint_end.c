#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 *
 * @head: head node pointer
 * @n: data to add in list
 *
 * Return: updated list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		dprintf(2, "ERROR: can't malloc");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* handle an empty list */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	/* handle a populated list */
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (*head);
}
