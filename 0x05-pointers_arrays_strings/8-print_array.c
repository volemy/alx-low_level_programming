#include "main.h"
#include <stdio.h>
/**
 * print-array - function that prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of array to be printed
 *
 * Description: n is the number of elements of the array to be printed
 * numbers must be separated by a comma, followed by space
 * numbers should be displayed in the same order as they are stored in array
 *
 * return a and n
 *
 */
void print_array(int *a, int n)
{
		int j;

		for (j = 0; j < (n - 1); j++)
		{
			printf("%d, ", a[j]);
		}

		if (j == (n - 1))
		{
			printf("%d" , a[n - 1]);
		}
	
		printf("\n");

		
}
