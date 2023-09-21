#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tempb, *new_node, *tempf;
	tempb = *h;

	while (idx != 1)
	{
		tempb = tempb->next;
		idx--;
	}
	tempf = tempb->next;

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	tempb->next = new_node;
	tempf->prev = new_node;
	new_node->prev = tempb;
	new_node->next = tempf;

	return (new_node);
}
