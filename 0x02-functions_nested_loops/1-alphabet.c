#include "main.h"


/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
	}
	_putchar('\n');
}
