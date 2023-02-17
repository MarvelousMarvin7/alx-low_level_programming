#include <stdio.h>

/**
 *main - Output uppercase and lower case
 *
 *Return: 0 after success
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar(10);
	return (0);
}
