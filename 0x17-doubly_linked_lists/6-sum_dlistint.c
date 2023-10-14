#include "lists.h"

/**
 * sum_dlistint - sum element in node
 * @head: head of node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
