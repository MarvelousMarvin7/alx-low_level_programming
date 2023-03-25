#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: pointer to arrays
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: (-1) if no match and if size is less than or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}
	}
	return (-1);
}
