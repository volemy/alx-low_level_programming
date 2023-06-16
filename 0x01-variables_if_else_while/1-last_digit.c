#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the last digit of number stored in variable
 * As long as the digit is greater than 5, 0 or less than 6
 *
 * Description: Check last digit of number
 * Return: 0 value (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	return (0);
}
