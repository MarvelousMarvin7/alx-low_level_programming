#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a position
 * @head: first node address
 * @idx: position of node
 * @n: data of node
 *
 * Return: Address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int pos = 0;

	ptr = *head;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;

	while (pos < idx - 1 && ptr != NULL)
	{
		return (NULL);
		pos++;
	}

	if (pos < idx - 1 || ptr == NULL)
		return (NULL);

	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
