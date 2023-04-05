#include "lists.h"

/**
 * list_len - number of element in list_t
 * @h: head pointer
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
