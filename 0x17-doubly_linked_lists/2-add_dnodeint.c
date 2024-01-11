#include "lists.h"

/**
 * add_dnodeint - add node at begining of doubly linked list
 *
 * @head: head node
 * @n: data for new node
 *
 * Return: pointer to new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (head == NULL)
	{
		dprintf(2, "NULL double pointer");
		exit(EXIT_FAILURE);
	}
	if (new_node == NULL)
	{
		dprintf(2, "MALLOC ERROR\n");
		exit(EXIT_FAILURE);
	}
	/* add data */
	new_node->n = n;
	/* handle new_node pointers */
	new_node->prev = NULL;
	new_node->next = (*head);
	/* update next_node prev pointer if list is not empty */
	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;

	return (*head);
}
