#include "main.h"
/**
 *
 * jack_bauer - program prints every minute of day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
int j, k;

j = 0;

while (j < 24)

{
k = 0;
while (k < 60)
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(58);
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar(10)
k++;

}
j++;

}

}
