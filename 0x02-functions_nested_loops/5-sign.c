#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: integer to be checked
 *
 * Description: check if it prints sign of a number
 * Return: 1 and prints + if n is greater than zero
 *         prints 0 if n is zero
 *          prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);

}
else if (n == 0)
{
_putchar(48);
return (0);
}

else if (n < 0)

{
_putchar(45);
return (-1);
}

return (-1);

}
