#include "lists.h"

/**
 * sum_listint - finds the sum of node list data(n)
 *
 * @head: head node
 *
 * Return: sum value or NULL
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	
	temp = head;
	sum = 0;
	while (temp)
	{
		sum += (temp->n);
		temp = temp->next;
	}
	return (sum);
}
