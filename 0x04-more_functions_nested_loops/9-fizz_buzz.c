#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((!(i % 3)) && (!(i % 5)))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');
		else
			putchar(10);
	}
	return (0);
}
