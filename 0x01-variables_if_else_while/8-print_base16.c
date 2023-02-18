#include <stdio.h>

/**
 * main - ouput hexdecimal
 *
 * Return: 0 after success
 */
int main(void)
{
	char alpha;
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
