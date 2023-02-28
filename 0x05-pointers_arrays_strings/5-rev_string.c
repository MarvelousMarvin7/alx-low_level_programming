#include "main.h"

/**
 * rev_string - reverse a string
 * @s: character variable
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
