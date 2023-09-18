#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a list
 * @head: head node
 * @n: data of node to be added
 * Return: address of new element else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	/* create an empty address of nodes */
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	/* assign the new addresses to the head node */
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
