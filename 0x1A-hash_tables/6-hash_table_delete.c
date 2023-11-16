#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer of table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current;
	unsigned long int size, count;

	size = ht->size;

	for (count = 0; count < size; count++)
	{
		if (ht->array != NULL)
		{
			temp = ht->array[count];
			while (temp != NULL)
			{
				current = temp;
				temp = temp->next;
				free(current->value);
				free(current->key);
				free(current);
			}
			temp = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
