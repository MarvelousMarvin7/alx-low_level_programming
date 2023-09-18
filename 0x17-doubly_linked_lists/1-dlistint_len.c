#include "lists.h"

/**
 * dlistint_len - return length of list
 * @h: head of node
 * Return: Number of element or nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while(ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
