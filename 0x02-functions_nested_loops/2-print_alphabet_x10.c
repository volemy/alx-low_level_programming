#include "main.h"
/**
 * print_alphabet_x10 - Function prints 10 times the alphabet in lowercase
 * should be followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;

	int j;

	c = 'a';

	for (j = 0; j < 10)
	{

	     while (c <= 'z')
		{
		  _putchar(c);
		   c++;

		}	

		_putchar(10);
		j++;

	}

}
