#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int n;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		table->array[n] = NULL;
	return (table);
}
