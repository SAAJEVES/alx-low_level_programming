#include <stdio.h>

void saySomething(void) __attribute__((constructor));
/**
 * saySomething - print a required statement
 *
 * Return: void
 */
void saySomething(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
