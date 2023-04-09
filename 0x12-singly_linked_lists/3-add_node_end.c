#include "lists.h"
#include <string.h>

/**
 * add_node_end - add new node to the end
 * @str: new string node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL, *temp;

	temp = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
