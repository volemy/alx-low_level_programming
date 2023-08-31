#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * to get from one number to another
 * @n: data input
 * @m: data input
 *
 * Return: 0 (succes)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, c = 0;
	unsigned long int d;
	unsigned long int e = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		d = e >> b;
		if (d & 1)
			c++;

	}

	return (c);
}
