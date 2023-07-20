#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - to print a name
 * @name: name to print
 * @f: function pointer to print name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}
