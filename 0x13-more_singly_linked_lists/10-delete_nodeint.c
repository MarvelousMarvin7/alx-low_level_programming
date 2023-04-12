#include "lists.h"

/**
 * delete_nodeint_at_index - remove a node
 * @head: first node address
 * @index: position to delete
 *
 * Return: 1 if succeeded else -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cptr, *olptr, *temp;
	unsigned int pos;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	cptr = *head;
	olptr = NULL;
	pos = 0;

	while (cptr != NULL && pos < index)
	{
		olptr = cptr;
		cptr = cptr->next;
		pos++;
	}

	if (cptr == NULL)
		return (-1);

	olptr->next = cptr->next;

	free(cptr);
	return (1);
}
