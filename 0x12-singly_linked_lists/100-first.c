#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - prints a sentence before the main
 * function is executed
 * Descrption: using the GCC attribute constructor to specify that this
 * function should be executed automatically before the main function.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
