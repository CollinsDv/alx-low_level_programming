#include "lists.h"

/**
 * add_nodeint - returns a pointer to beginning of the updated list
 *
 * @head: pointer to list to be updated
 * @n: data to input into new node
 *
 * Return: pointer to updated list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
