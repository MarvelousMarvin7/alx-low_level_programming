#include "main.h"

/**
 * _strcat - Concatenates two strings
 *@dest: return variable
 *@src: append variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((dest[i] = src[j]) != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
