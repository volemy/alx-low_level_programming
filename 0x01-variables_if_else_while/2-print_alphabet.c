#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase
 * Return: 0 value always (success)
 */
int main(void)
{
int character = 'a';
while (character <= 'z')
{
putchar(character);
character += 1;
}
putchar('\n');
return (0);
}
