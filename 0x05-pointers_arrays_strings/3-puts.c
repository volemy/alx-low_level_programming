#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: string to print
 *
 * Description: should be followed by newline
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0')

	_putchar(*str);
	str++;

	}
	_putchar('\n');

}
