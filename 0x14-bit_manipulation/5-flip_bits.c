#include "main.h"

/**
 * flip_bits - Flip to get from one number to the other
 * @n: number to be fliped
 * @m: number to get to after flipping
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int count = 0;

	while (dif != 0)
	{
		if (dif & 1)
		{
			count++;
		}
		dif >>= 1;
	}

	return (count);
}
