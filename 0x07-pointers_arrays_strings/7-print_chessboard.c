#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints an 8 by 8 array
 *
 * @a: the array to print put
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);

			if (j % 7 == 0 && j != 0)
			{
				_putchar('\n');
			}
		}
	}
}
