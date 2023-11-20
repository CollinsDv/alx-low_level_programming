#include "lists.h"

/**
 * pop_listint - removed the linked list head node
 *
 * @head: pointer to head node
 * Return: the data in the poped head node
 */
int pop_listint(listint_t **head)
{
	int data;
	/*assign a temporary node*/
	listint_t *temp;
	/*check of head node is empty*/
	if (head == NULL || *head == NULL)
		return(-1);

	/*set temp to point to 2nd node after head*/
	temp = (*head)->next;
	/*transfer the data in the head node*/
	data = (*head)->n;
	/*free the head node*/
	free(*head);
	/*update head to next node through temp*/
	*head = temp;

	return (data);
}
