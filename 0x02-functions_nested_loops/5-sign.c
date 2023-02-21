#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: variable to check
 *
 * Return: 1, +, 0, -1, -, per n condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
