#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a position
 * @h: head of list
 * @idx: position of node
 * @n: data of node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tempb, *new_node, *tempf;
	unsigned int count = 0;

	tempb = *h;

	while (idx != 1)
	{
		tempb = tempb->next;
		idx--;
		count++;
	}
	if (count > idx)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	tempf = tempb->next;
	tempb->next = new_node;
	new_node->prev = tempb;
	new_node->next = tempf;
	if (tempf != NULL)
		tempf->prev = new_node;
	return (new_node);
}
