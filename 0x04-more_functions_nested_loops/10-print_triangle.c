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
		int a, b;
		
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(' ');
			}
			
			for (b = 1; b <= a; b++);
			{
				_putchar('#');
			}
			
			_putchar('\n');

		}
	}
}
