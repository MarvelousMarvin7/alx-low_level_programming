#include "function_pointers.h"

/**
 * array_iterator - execute a function as parameter on each element of an array
 * @array: elements of array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: 0;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (action && array)
		for (n = 0; n < size; n++)
			action(array[n]);
}
