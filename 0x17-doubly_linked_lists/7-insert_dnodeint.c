#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at idx
 *
 * @h: doubly linked list head node
 * @idx: index position
 * @n: data to input in list
 *
 * Return: updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i;

<<<<<<< HEAD
	if (idx > size - 1 || h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (count < idx)
	{
		temp = temp->next;
		count++;
	}
	if (temp->prev == NULL) /* add node as head node */
	{
		new_node->next = temp;
		new_node->prev = NULL;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		/*return (temp);*/
	}
	else if (temp->next == NULL) /* add node as tail node */
	{
		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
		/*return (new_node);*/
	}
	else
	{
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
		/* return (temp->prev);*/
	}
	return (new_node);
=======
    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    temp = *h;
    for (i = 0; i < idx - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    return new_node;
>>>>>>> 79f447dd84847d81642337f2ac6ca867e59dfcc4
}

/**
 * dlistint_len - return no. of elements of a list
 *
 * @h: head node pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t nodes = 0;

	if (!h)
		return (0);

	temp = h;
	while (temp)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
