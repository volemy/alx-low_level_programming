#include "main.h"
#include <stdio.h>
/**
 * main - program that prints numbers from 1 to 100 followed by a newline
 *
 * Description: for multiples of three print Fizz instead of number
 *              should print Buzz for multiples of five instead of number
 *             multiples of three and five print FizzBuzz
 *             separate each number by a space
 * Return: 0 (success)
 */
int main(void)

{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{

			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}	
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");

	return (0);
}
