#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * @head: head of list
 * @index: position of nodes
 * Return: 1 ON SUCCESS else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tempb;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return (0);
	tempb = temp->prev;
	tempb->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = tempb;
	free(temp);

	return (1);
}
