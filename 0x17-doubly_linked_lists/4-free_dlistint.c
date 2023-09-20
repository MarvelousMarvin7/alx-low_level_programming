#include "lists.h"

/**
 * free_dlistint - frees memory allocated
 * @head: head node of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
