#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using calloc
 * @b: size of memory
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
