#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 *
 * Return: -ve if s1 < s2, 0 if s1 == s2, +ve if s1 > s2
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	tmp;

	for   (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
