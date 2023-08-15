#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index of specific bit to be changed
 * @n: pointer to variable holding a number
 *
 * Return: 1 (success), otherwise -1
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
