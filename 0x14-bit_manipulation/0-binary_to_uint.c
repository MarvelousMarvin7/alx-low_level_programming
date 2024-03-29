#include "main.h"

/**
 * binary_to_uint - coverts binary number to unsigned int
 * @b: binary number to convert
 *
 * Return: Converted number or else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
