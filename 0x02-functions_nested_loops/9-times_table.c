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
	while (table < 10)
	{
		times = 0;
		while (times < 10)
		{
			int value = times * table;

			if (times == 0)
			{
				_putchar(times + '0');				
			}
			if (value < 10 && times != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(value + '0');
			}
			else if (value >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
		}
		_putchar('\n');
	}	
}
