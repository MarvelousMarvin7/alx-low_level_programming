#include "main.h"

/**
 * _strspn - fills memory with constant bytes
 * @s: pointer of characters
 * @accept: characters to get length
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
				break;
		}
		if (accept[n] == 0)
			break;
	}
	return (i);
}
