#include "hash_tables.h"

/**
 * hash_table_set - add element to a table
 * @ht: hash table
 * @key: key of table
 * @value: value of key
 *
 * Return: 1 if passed else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long position, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	position = key_index((const unsigned char *) key, size);

	if (ht->array[position] != NULL &&
	    strcmp(ht->array[position]->key, key) == 0)
	{
		ht->array[position]->value = strdup(value);
		return (1);
	}

	/* add new node at the begining incase of collusion */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[position];
	ht->array[position] = new_node;
	return (1);
}
