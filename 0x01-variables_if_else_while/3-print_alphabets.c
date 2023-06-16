#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int ch = 'a'
int CH = 'A'

while (ch <= 'z')
{
putchar(ch);
ch += 1;
}

while (CH <= 'Z')
{
putchar(CH);
CH += 1;
}

putchar('\n');
return (0);
}
