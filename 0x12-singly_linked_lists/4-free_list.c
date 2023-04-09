#include "lists.h"

/**
 * free_list - free list of data structure
 * @head: first node pointer
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
