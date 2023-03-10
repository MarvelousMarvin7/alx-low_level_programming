#include "main.h"

/**
 * _puts_recursion - outputs string
 * @s: string variable
 * Return: string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
