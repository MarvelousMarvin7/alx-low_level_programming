#include <stdio.h>

/**
 *main - output digits
 *
 *Return: 0 after success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar(10);
	return (0);
}
