#include "main.h"

/**
 * print_binary - print number in binary
 * @n: number to convert
 *
 * Return : Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
