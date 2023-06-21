#include "main.h"
/**
 * times_table - Function that prints the 9 times table starting with 0
 *
 * Description: check if it prints 9 times table , starting with 0
 */
void times_table(void)
{

int j, k, l;

for (j = 0; j < 10; j++)

{
for (k = 0; k < 10; k++)

{

l = k * j;
if (k == 0)
{
_putchar(l + '0');

}
if (l < 10 && k != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(l + '0');
}
else if (l >= 10)
{
_putchar(44);
_putchar(32);
_putchar((l / 10) + '0');
_putchar((l % 10) + '0');
}
}
_putchar('\n');
}
}
