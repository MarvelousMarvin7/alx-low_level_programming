#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all argument of program
 * @ac: arguments count
 * @av: arguments vector or strings
 * Return: Pointer or Null if ac and av is 0
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, len;

	if (ac == 0 && av == NULL)
		return (NULL);
	for (len = 0, i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
	free(ptr);
}
