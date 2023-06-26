#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * main -  program that generates random valid passwords
 * for the program 101-crackme 
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int a[100];
	int b;
	int c;
	int d;

	c = 0;

	srand(time(NULL));

	for (b = 0; b < 100; b++)
	{
		a[b] = rand() % 78;
		c += (a[b] + '0');
		putchar(a[b] + '0');

		if ((2772 - c) - '0' < 78)
		{
			d = 2772 - c - '0';
			c += d;
			putchar (d + '0'):
			break;
		}

	}
	return (0);
}


