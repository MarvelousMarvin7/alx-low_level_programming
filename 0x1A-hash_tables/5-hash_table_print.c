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

	if (ht != NULL)
	{
		size = ht->size;

		printf("{");

		for (count = 0; count < size; count++)
		{
			temp = ht->array[count];
			while (temp != NULL)
			{
				if (i)
					printf(", ");
				printf("'%s' : '%s'", temp->key, temp->value);
				i = 1;
				temp = temp->next;
			}
		}
		printf("}\n");
	}
	else
		printf("{}");
}
