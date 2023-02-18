#include <stdio.h>

/**
 *main - Output numbers
 *
 *Return: 0 after success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	printf("\n");
	return (0);
}
