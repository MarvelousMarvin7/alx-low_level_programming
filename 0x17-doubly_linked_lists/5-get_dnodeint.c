#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a position
 * @head: head of node
 * @index: position of element
 * Return: Null if node does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int position;

	position = 0;
	temp = head;

	while (temp != NULL)
	{
		if (position == index)
			return (temp);

		temp = temp->next;
		position++;
	}
	return (NULL);
}
