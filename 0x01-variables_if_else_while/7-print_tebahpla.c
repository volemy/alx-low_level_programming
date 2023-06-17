#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alphabet in reverse on new line
 * Return: 0 (success)
 */
int main(void)
{
int character = 'z';
while (character >= 'a')
{
putchar(character);
character--;
}
putchar('\n');
return (0);
}
