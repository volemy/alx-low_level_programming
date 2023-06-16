#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
int lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	if (lowercase != 'e' && lowercase != 'q')
	{
		putchar(lowercase);
	}
}
return (0);
}
