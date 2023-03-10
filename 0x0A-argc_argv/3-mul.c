#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: counts number of argument in the command line
 * @argv: output number of array of strings on the command line
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
