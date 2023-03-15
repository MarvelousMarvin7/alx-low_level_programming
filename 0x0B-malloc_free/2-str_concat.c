#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer or Null is failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)

		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr)
	{
		strcpy(ptr, s1);
		strcat(ptr, s2);
	}
	return (ptr);
	free(ptr);
}
