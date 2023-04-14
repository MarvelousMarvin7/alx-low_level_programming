#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: bit to set
 * @index: index of bit to set
 *
 * Return: 1
 * On error, return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (0);
}
