#include "main.h"
/**
 * print_square - function that prints a square followed by a new line
 * @size: size of square
 *
 * Description: size is the size of square
 *                 if size is 0 or less print newline
 *                 use # character to print square
 *
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');

	}

	for (a = 0; a < size; a++)

	{
		for (b = 0; b < size; b++)

		{
			_putchar('#');

		}

		_putchar('\n');
	}
}
