#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Description:should not use long
 *             should not use arrays or pointers
 *             should not use hard core values
 */
void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		n2 = -n;
		_putchar('-');
	}
	else
	{
		n2 = n;
	}

	if (n2 / 10)
	{
		print_number(n2 / 10);
	}

	_putchar((n2 % 10) + '0');
}
