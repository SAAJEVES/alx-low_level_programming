#include <stdio.h>

void saySomething() __attribute__((constructor));
void saySomething()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
