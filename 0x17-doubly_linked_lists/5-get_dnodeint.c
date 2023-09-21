#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a position
 * @head: head of node
 * @index: position of node
 * Return: position of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;
	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (temp);

}
