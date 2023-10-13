#include "lists.h"

/**
 * add_dnodeint - add node to a list
 * @head: head of node
 * @n: element or data of node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	if (*head == NULL)
		temp->next = NULL;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	*head = temp;

	return (temp);
}
