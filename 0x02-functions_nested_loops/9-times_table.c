#include "main.h"

/**
 * times_table - entry point
 *
 * Return: always 0
 */
void times_table(void)
{
	int table;
	int times;

	table = 0;
	while (n < 10)
	{
		times = 0;
		while (times < 10)
		{
			int value = times * table;
			if (value == 0)
			{
				putchar(' ');
				putchar(' ');
				putchar(48)
			}
		}
	}	
}
