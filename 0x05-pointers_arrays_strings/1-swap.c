#include "main.h"

/**
 * swap_int - swap 2 integer
 * @a: 1st Number variable
 * @b: 2nd Number variable
 *
 *  Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
