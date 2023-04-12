#include "lists.h"

/**
 * sum_listint - add all data of list
 * @head: first node address
 *
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;

	if (ptr->next == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;

	}

	return (sum);
}
