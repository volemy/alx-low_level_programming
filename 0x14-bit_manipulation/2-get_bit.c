#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of bit to be gotten
 *
 * Return: value of bit at index, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
