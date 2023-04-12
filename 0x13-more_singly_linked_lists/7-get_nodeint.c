#include "lists.h"
/**
 * get_nodeint_at_index - return a node position
 * @head: first node address
 * @index: position to return
 *
 * Return: returns a nth node position or NULL if failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int num = 0;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;

		if (num == index)
			return (ptr);
		num++;
	}
	return (NULL);
}
