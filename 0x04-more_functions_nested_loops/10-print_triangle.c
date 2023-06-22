#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: it is the size of triangle
 * Description: check if function prints triangle followed by newline
 *              should only print newline if size is 0 or less
 *              use # character to print triangle
 *              triangle size is determined by size parameter
 *
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
