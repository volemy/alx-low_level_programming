#include <stdio.h>

/**
 * initial -function that  applieus the constructor attribute to my initial()
 * so it's executed before the main()
 *
 */
void initial(void)__attribute__((constructor));

/**
 * initial - implementation of  initial
 */
void initial(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
