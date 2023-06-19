#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:check if it prints combinations of two two-digit numbers
 * Return: 0 success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)

	{
		for (j = 0; j <= 99; j++)
		{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar (32);
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');

		if (!(i== 98 && j == 99))
			continue;

		putchar (',');

		putchar (' ');

		}
	}

	putchar ('\n');

	return (0);
}
