#include "main.h"

/**
 * add - function that sums two integers
 * @a:  first integer
 * @b: second integer
 *
 * Return: an integer
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - function that returns difference between two integers
 * @a:  first integer
 * @b: second integer
 *
 * Return: an integer
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - function that returns product of two integers
 * @a:  first integer
 * @b:  second integer
 *
 * Return: an integer
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div -function that divides two integers
 * @a:  first integer
 * @b:  second integer
 *
 * Return: an integer
 */
int div(int a, int b)
{
if (b == 0)
{
return -1;
}
return (a / b);
}

/**
 * mod - function that returns modular value of two integers
 * @a:  first integer
 * @b:  second integer
 *
 * Return: an integer
 */
int mod(int a, int b)
{
if (b == 0)
{
return (-1);
}
return (a % b);
}
