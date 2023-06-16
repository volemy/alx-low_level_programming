#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch += 1;
}

int c = 'A';

while (c <= 'Z')
{
putchar(c);
c += 1;
}

putchar('\n');
return (0);
}
