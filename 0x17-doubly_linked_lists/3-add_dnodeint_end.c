#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of list
 * @head: head of node
 * @n: element of node
 * Return: address of new node else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp1, *temp2;

	temp2 = malloc(sizeof(dlistint_t));
	if (temp2 == NULL)
		return (NULL);
	temp2->n = n;
	if (*head == NULL)
	{
		temp2->prev = NULL;
		*head = temp2;
		return (temp2);
	}
	temp2->next = NULL;

	temp1 = *head;

	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp2->prev = temp1;
	temp1->next = temp2;

	return (temp2);
}
