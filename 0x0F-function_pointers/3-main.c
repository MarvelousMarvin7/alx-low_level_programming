#include "3-calc.h"

/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = fptr(a, b);
	printf("%d\n", c);
	return (0);
}
