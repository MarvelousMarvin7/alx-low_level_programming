#include "main.h"

/**
 * _strncat- Concatenate striings
 * @dest: resulting string
 * @src: appends src to dest
 * @n: n bytes of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while ((dest[j] != '\0'))
		j++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	return (dest);
}
