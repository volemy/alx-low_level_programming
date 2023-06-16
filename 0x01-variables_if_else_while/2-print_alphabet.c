#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase
 *
 * Description: Print alphabet in lowercase
 * Return: 0 value always (success)
 */
int main(void)
{
	char c;

	for (c - 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
