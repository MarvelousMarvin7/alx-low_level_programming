#include "hash_tables.h"

/**
 * key_index - gives indrx of key in the array or backet
 * @key: key
 * @size: size of array
 * Return: position of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
