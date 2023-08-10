#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 1 and 0 chars
 *
 * Return: converted number or 0
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
