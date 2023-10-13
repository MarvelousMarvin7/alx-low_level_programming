#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: head of list
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
