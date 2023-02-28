#include "main.h"

/**
 * _puts - print a string
 * @str - character variable
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s]; s++)
	{
		_putchar(str[s]);
	}
	_putchar(10);
}
