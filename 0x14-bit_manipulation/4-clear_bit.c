#include "main.h"

/**
 * clear_bit - function thatbsets the value of bit to 1 at s given index
 * @n: pointer to the variable holding the given number
 * @index: index of specific bit to be cahnged
 *
 * Return: 1 (success), otherwise -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
