#include "main.h"
/**
 * puts2 - function that prints every character of string
 * @str: input
 *
 * Return:print
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *c = str;
	int i;
	while (*c != '\0')
	{
		c++;
		a++;

	}
	b = a - 1;

	for (i = 0 ; i <= b ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
