#include "variadic_functions.h"

/**
 * sum_them_all - add all parameter
 * @n: 1st argument
 *
 * Return: sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total, numbers;
	va_list args;

	if (n == NULL)
		return (0);

	total = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		total += numbers;
	}
	va_end(args);

	return (total);
}
