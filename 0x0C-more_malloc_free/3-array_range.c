#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates array of integers
 * @min: minimun variable
 * @max: maximum variable
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len = 0;

	if (min > max)
		return (NULL);
	while (len < (max - min))
		len++;
	ptr = malloc(sizeof(*ptr) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
	free(ptr);
}
