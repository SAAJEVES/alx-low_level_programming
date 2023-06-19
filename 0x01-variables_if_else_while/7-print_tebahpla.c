#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the lowercase alphbaet fro z to a
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
