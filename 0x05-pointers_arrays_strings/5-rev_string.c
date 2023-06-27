#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string to be reversed
 *
 * Return 0 (success)
 */
void rev_string(char *s)
{
	int l = 0;
	int a;
	int b;
	char temp;

	while (s[l] != '\0')
		l++;

	for (a = 0,  b = l - 1; a < b; a++, b--)
	
		{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		}
}
