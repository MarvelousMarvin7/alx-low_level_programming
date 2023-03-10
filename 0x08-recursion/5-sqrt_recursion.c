#include "main.h"

/**
 * sqrt_read - checks for the square root of b
 * @a:guess at sqrt
 * @b:number to find
 * Return: square root of b
 */
int sqrt_read(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_read(a + 1, b));
}

/**
 * _sqrt_recursion - print suare root of number
 * @n: number variable
 * Return: numbers.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_read(1, n));
}
