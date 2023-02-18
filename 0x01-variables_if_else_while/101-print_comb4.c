#include <stdio.h>

/**
 * main - prints out all the numbers between 012 and 789
 * with no three digits being the same
 * Return: 0
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 + digit2 + digit3 < 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
