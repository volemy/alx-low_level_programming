#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
int ch = 'a';
while (ch <= 'z'; ch += 1)
{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
}
putchar('\n');
return (0);
}
