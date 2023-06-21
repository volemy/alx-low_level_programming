#include <stdio.h>
/**
 * main - program prints sum of all multiples of 3 and 5 below 1024
 *
 * Description: check if it prints sum of all multiples of 3 and 5
 *              should be below 1024 (excluded)
 *              should be followed by new line
 * Return: 0 (success)
 */
int main(void)
{
int j, sum = 0;

for (j = 0; j < 1024; j++)

{
if((j % 3) == 0 || (j % 5) == 0)
sum += j;

}
printf("%d\n", sum);
return (0);
}
