#include "lists.h"

/**
 * add_nodeint - free list
 * @head: first node address pointer
 * @n: integer node
 *
 * Return: Nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
