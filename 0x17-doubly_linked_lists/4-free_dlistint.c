#include "lists.h"

/**
 * free_dlistint - free memory allocated for nodes
 * @head: head of node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
