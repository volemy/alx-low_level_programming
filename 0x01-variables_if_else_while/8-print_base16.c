#include <stdio.>
/**
 * main - Entry point
 *
 * Description: Aprogram that prints all numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
int character = 'a';
int number = '0';

while (number <= '9')

{
putchar(number);
number++;
}
while (character <= 'f')

{
putchar(character);
character++;
}
putchar('\n');
return (0);
}
