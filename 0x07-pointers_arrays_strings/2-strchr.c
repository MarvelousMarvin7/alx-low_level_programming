#include "main.h"

/**
 * _strchr - fills memory with constant bytes
 * @s: pointer of characters
 * @c: characters to locate
 * Return: s else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
