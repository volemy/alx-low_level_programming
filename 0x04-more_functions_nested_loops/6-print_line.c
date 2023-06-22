#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 * Description: n is the number of times the character _ should be printed
 *              line should end with new line
 *              should only print newline if n is 0 or less
 *
 */
void print_line(int n)

{

if (n <= 0)

{

_putchar('\n');

}

for (; n > 0; n--)
{

_putchar('_');

}
_putchar('\n');

}
