#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: pointer to be filled
 * @b: what to fill the pointer with
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
