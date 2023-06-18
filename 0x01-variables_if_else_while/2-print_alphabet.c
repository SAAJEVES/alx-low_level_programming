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
	int lower = 97;

	while (lower > 97 + 26)
	{
		putchar(lower);
		lower++;
	}
	return (0);
}
