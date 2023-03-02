#include "main.h"

/**
 * reverse_array - check the code
 * @a: variable to reverse
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
