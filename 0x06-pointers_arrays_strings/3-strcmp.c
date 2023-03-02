#include "main.h"

/**
 * _strcmp- Copy striings
 * @s1: resulting string
 * @s2: compares to s1
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((s1[i] - s2[i]));
}
