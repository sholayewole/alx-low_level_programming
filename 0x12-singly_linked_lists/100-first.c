#include <stdio.h>

void hare_tortoise(void) __attribute__ ((constructor));

/**
 * hare_tortoise - prints the message before main is executed
 */
void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

