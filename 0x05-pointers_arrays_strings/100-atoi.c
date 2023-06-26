#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that converts string to integer
 * 
 * @s: string to convert
 * Description:number in string can be preceeded by an infinite character
 * take into account - and + signs
 * if there are no numbers in string function returns 0
 * Return: int value converted to string
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;

	while (s[l] != '\n')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] === '-')
			j++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (j % 2)
				n = -n;
			k = k * 10 + n;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;

	}
	if (m == 0)
		return (0);
	return (k);
}
