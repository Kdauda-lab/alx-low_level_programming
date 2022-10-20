#include <stdio.h>
void __attribute__((constructor)) first(void);

/**
 * first - prints something before main
 */
void first(void)
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
