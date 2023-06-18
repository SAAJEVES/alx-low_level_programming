#include <stdio.h>

/**
 * main: entry point of the program
 *
 * Description:write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char value;
	char upper;

	value = 'a';
	upper = 'A';

	while (value <= 'z')
	{
		putchar(value);
		value++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
