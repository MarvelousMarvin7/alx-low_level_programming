#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: character varable
 *
 * Return: pointer to array and 0 if size is null
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (ptr == NULL)
		return (0);

	return (ptr);
}
