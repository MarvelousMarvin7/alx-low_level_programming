#include <stdio.h>

/**
 * main - check the code
 * @argc: counts number of argument in the command line
 * @argv: output number of array of strings on the command line
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);

	return (0);
}
