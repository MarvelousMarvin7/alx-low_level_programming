#include "lists.h"

/**
 * print_list - print all elements of list_t structure
 * @h: head of linked list
 *
 * Return: Always 0;
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		n++;
	}

	return n;
}
