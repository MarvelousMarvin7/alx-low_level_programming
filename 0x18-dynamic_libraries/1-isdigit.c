#include "main.h"

/**
 * _isdigit - Checks for digit
 *@c: Variable to be tested
 *
 *Return: 1 if a digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
