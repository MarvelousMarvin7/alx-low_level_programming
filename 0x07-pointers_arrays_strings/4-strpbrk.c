#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in a string
 * @s: pointer of characters
 * @accept: characters to match
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, w;

	for (i = 0; s[i]; i++)
	{
		for (w = 0; accept[w]; w++)
		{
			if (s[i] == accept[w])
			{
				break;
			}
		}
		if (accept[w])
			return (s + i);
	}
	return (0);
}
