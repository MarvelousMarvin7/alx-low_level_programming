#include "main.h"

/**
 * _strstr -  locates the first occurrence in a string
 * @haystack: pointer of characters
 * @needle: characters to match
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, w;

	w = 0;
	for (i = 0; haystack[i]; i++)
	{
		while (needle[w] && (haystack[i] == needle[0]))
		{
			if (haystack[i + w] == needle[w])
				w++;
			else
				break;
		}
		if (needle[w])
			w = 0;
		else
		return (haystack + i);
	}
	return (0);
}
