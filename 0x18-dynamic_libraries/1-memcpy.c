#include "main.h"

/**
 * _memcpy - fills memory with constant bytes
 * @dest: pointer to copy into
 * @src: what to copy into the pointer with
 * @n: number of bytes to fill
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && n > 0; i++)
		dest[i] = src[i];
	return (dest);
}
