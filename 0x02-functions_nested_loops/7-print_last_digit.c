#include "main.h"

/**
 * print_last_digit - A function that output last digit of a number
 * @n: Number variable
 *
 * Return: value of the last digit if negative or positive
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (n > 0)
	{
		_putchar(lastd + '0');
		return (lastd);
	}
	else if (n == 0)
	{
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		lastd = n % 10 * (-1);
		_putchar(lastd + '0');
		return (lastd);
	}
}
