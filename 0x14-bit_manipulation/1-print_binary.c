#include "main.h"

/**
 * print_binary - function that prints the binary form of  a number
 * @n: number to be passed
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_position = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int k = 0;

	while (bit_position > 0)
	{
		if (n & bit_position)
			k = 1;

		if (k)
		{
			if (n & bit_position)
				_putchar('1');

			else
				_putchar('0');
		}
		bit_position >>= 1;
	}
	if (!k)
		_putchar('0');
}
