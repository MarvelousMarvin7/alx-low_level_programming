#include "lists.h"
#include "string.h"

/**
 * add_node - adds new node to the struct list
 * @head: first node on list
 * @str: pointer to new string nodes
 *
 * Return: Pointer to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = NULL;
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
