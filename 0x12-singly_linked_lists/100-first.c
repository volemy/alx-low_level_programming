#include <stdio.h>

void initial(void)__attribute__((constructor));
/**
 * initial _ function that uses constructor attribute to print a sentence
 * before the main
 *
 */
void initial(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
