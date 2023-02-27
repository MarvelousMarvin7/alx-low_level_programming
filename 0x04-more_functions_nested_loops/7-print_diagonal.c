#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: Number variable
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j <= i - 1; j++)
					_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
