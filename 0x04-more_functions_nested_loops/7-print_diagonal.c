#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: this is the number of times the character \ should be printed
 *
 * Description: n is the number of times the character \ should be printed
 *              the \ should end with a newline
 *              should only print a newline if n is 0 or less
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)

	{
		for (b = 0; b < a; b++)

			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}


}
