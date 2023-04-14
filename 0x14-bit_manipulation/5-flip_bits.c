#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: number to flip to get the other
 * @m: number to get
 *
 * Return: number of bits counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}

	return (count);
}
