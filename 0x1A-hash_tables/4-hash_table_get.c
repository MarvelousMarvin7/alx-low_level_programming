#include "hash_tables.h"

/**
 * hash_table_get - get value associated with key
 * @ht: hash table
 * @key: key in table
 *
 * Return: Key and value pairs
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, position;
	hash_node_t *temp;

	if (key == NULL || ht == NULL)
		return (NULL);

	size = ht->size;
	position = key_index((const unsigned char *)key, size);
	temp = ht->array[position];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}
