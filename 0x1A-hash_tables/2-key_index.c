#include "hash_tables.h"

/**
 * key_index - position of a key
 * @key: the key, string
 * @size: size of table
 * Return: Position of key using the hash function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
