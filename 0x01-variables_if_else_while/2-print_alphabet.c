#include <stdio.h>

/**
 * main - Output alphabets
 *
 * Return: 0 after Success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar(10);
	return (0);
}
