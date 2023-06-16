#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase using putchar function
 *
 * Description: Print alphabet in lowercase
 * Return: 0 value always (success)
 */
int main(void)
{
	for (char character = 'a'; character <= 'z'; ++character)
		putchar(character);

	putchar('\n');

	return (0);
}
