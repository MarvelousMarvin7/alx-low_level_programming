#include "main.h"
#include <stdlib.h>
/**
 * get_bit - get bit of an index
 * @n: bit
 * @index: size of bit
 *
 * Return: Value of bit at index
 * On error, return -1 if index is greater than bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
