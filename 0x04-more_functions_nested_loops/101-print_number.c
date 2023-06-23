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
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
