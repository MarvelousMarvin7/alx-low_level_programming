#include <stdio.h>

/**
 *main - Output lower letters-q and e
 *
 *Return: 0 after succes
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar(10);
	return (0);
}
