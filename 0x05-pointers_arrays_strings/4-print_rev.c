#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: string to print
 * Return: 0 (success)
 *
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;

	}

	_putchar('\n');
}


