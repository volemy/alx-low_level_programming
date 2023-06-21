#include <stdio.h>
/**
 * main - a program that prints first fibonacci numbers starting with 1 and 2
 *
 * Description: check if program prints first fibonacci numbers
 *              Starting with 1 and 2
 *              should be followed by new line
 *              numbers should be separated by comma, followed by a space
 * Return: 0 (success)
 */
int main(void)
{

int count;
unsigned long fibo1 = 1, fibo2 = 2, sum;

printf("%lu, %lu, ", fibo1, fibo2);

for (count = 0; count < 48; count++)

{

sum = fibo1 + fibo2;
printf(", %lu", sum);

fibo1 = fibo2;
fibo2 = sum;
}

printf("\n");


return (0);

}
