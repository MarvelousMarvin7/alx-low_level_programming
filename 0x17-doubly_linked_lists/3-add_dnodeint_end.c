#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 * @head: head node of list
 * @n: data of node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;
	/* add new node after reaching NULL of the next node */
	current->next = temp;
	temp->prev = current;

	return (temp);
}
