#include "main.h"

/*
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(1);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(4);
		return (-1);
	}
	else
	{
		_putchar(8);
		return (0);
	}
}
