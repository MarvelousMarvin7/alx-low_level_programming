#include <stdio.h>

/**
 *main - Out reversedd alphabets
 *
 *Return: 0 after success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar(10);
	return (0);
}
