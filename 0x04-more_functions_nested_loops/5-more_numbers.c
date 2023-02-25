#include "main.h"

/**
 * more_numbers - Checks code
 *
 * Return: 0 After Success
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j / 10;
			l = j % 10;
			if (j > 9)
			{
				_putchar(k + '0');
			}
			_putchar(l + '0');
		}
		_putchar(10);
	}
}
