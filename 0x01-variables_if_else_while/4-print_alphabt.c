#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: This function prints all the lowercase alphabet except e and q
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
		letter++;
	}
	return (0);
}
