#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first node address
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next_n;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;

	while (temp != NULL)
	{
		next_n = temp->next;
		free(temp);
		temp = next_n;
	}

	*head = NULL;
}
