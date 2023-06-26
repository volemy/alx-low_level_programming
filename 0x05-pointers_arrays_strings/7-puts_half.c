#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * @str: input
 * Description: function should print the second half of the string
 *              if number of characters is odd, print last n character of string
 *
 * Return: half of input
 */
void puts_half(char *str)
{
	int a;
	int b;
	int c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	k = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
		
	_putchar('\n');
}	
