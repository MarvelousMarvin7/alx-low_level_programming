#include "main.h"

/**
 * _strncpy- Copy striings
 * @dest: resulting string
 * @src: appends src to dest
 * @n: n bytes of src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
