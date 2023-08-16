#include "main.h"

/**
 * flip_bits -  function that returns the number of bits needed to flip
 * @m: wanted number
 * @n: previous number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int outcome = n ^ m;

	while (outcome)
	{
		cnt += outcome & 1;
		outcome >>= 1;

	}

	return (cnt);

}
