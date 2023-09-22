#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - functin that prints a sentence before the main
 * function is executed to completion
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
