#include "main.h"

/**
 * print_rev - reverse string
 * @s: character variable
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; *s != 0; len++)
		s++;
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar(10);
}
