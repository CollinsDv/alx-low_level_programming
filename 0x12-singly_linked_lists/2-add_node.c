#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node at the beginning of a inked list
 *
 * @head: head node
 * @str: string data *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}
