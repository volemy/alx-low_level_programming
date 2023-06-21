#include "main.h"
/**
 * print_last_digit - function prints last digit of a number
 *
 * @n: this is the integer to get last digit from
 *
 * Return: last digit value
 */
int print_last_digit(int n)
{
int i;

if (n < 0)
n = -n;

i = n % 10;

if (i < 0)
i = -i;

_putchar(i + '0');

return (i);
}
