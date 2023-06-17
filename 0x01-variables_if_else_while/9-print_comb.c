#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: numbers must be separated by , and printed in ascending order
 *
 * Return: 0 (success)
 */
int main(void)
{
int number = 0;

for (; number <= 9; number++)
{
putchar('0' + number);

if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
