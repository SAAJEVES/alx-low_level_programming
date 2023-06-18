#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercae
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
