#include "main.h"

/**
 * binary_to_uint - function that converts a binary  umber to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number , 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

	}
	for (a = 0; b[a] != '\0'; a++)
	{
		k <<= 1;
		if (b[a] == '1')
			k += 1;
	}

	return (k);
}

