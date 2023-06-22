#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;

	num = 0;

	while (num < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}
