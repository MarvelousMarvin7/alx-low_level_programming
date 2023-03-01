#include "main.h"

/**
 * puts_half - check the code
 * @str: variable to be used
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n;
	int length_of_the_string;

	length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	for (n = 0; n < length_of_the_string; n++)
	{
		if (n > (length_of_the_string - 1) / 2)
			_putchar(str[n]);
	}
	_putchar(10);
}
