#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:should print all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
int i =  '0';

while (i <= '9')
{
printf("%d", i);
i += 1;
}

printf('\n');
return (0);
}

