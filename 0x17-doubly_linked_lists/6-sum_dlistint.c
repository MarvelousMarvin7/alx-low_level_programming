#include "lists.h"

/**
 * sum_dlistint - sum data of list
 * @head: head of node
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
