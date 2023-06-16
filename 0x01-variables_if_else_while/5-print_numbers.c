#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:should print all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i =  '0';

	while (i <= '9')
	{
	putchar (i);
	i += 1;
	}

	putchar('\n');
	return (0);
}

