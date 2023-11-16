#include "hash_tables.h"

/**
 * hash_table_get - get values of key
 * @ht: pointer of hash table
 * @key: key to retrieve value
 *
 * Return: NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index, size;

	if (key == NULL || ht == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
