#include "lists.h"

/**
 * insert_empty - insert node when list is empty
 * @h: head of list
 * @n: data of node
 * Return: new node
 */
dlistint_t *insert_empty(dlistint_t **h, int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *h;
	temp->n = n;
	temp->prev = NULL;

	if (*h != NULL)
		(*h)->prev = temp;
	*h = temp;

	return (temp);
}
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

	if (idx == 0)
		return (insert_empty(h, n));
	tempb = *h;

	while (idx != 1)
	{
		if (tempb == NULL || tempb->next == NULL)
			return (NULL);
		tempb = tempb->next;
		idx--;
	}
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
