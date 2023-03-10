#include "main.h"

/**
 * _pow_recursion - outputs power of numbers
 * @x: 1st number variable
 * @y: 2nd number variable
 * Return: numbers
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
