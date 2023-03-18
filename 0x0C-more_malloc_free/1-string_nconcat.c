#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 *
 * Return: Pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);
	if (ptr)
	{
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
	}
	return (ptr);
}
