#include "lists.h"

/**
 * print_listint - free list
 * @h: first node address
 *
 * Return: Nothing
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		num++;
	}

	return (num);
}
