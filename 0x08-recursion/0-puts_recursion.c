#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints to the console some char like puts
 * @s: the character to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
