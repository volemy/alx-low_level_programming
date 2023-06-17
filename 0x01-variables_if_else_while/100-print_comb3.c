#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print two digit number combination in ascending order
 *
 * Return 0 (success)
 */
int main(void)
{
	int n = 0;
	int nr = n + 1;

	for (; n <= 8; n++)
	{
		for (; nr <= 9; nr++)
		{
			putchar('0' + n);
			putchar('0' + nr);

			if (n != 8 || nr != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		nr = n + 2;

	}

	putchar('\n');
	return (0);
}
