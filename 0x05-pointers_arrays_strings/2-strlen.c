#include "main.h"

/**
 * _strlen - output length of string
 * @s: variable to be used
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
