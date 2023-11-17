#include "hash_tables.h"

/**
 * hash_table_print - print key and values of hash tables
 * @ht: hash table pointer
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int size, count, i = 0;

	size = ht->size;

	if (ht != NULL)
	{
		printf("{");

		for (count = 0; count < size; count++)
		{
			temp = ht->array[count];
			while (temp != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;

				printf("'%s' : '%s'", temp->key, temp->value);

				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
