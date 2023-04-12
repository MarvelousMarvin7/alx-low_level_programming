#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: first node address
 *
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	temp = NULL;

	return (n);
}
