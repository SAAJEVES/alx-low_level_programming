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
			if (value == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48);
				_putchar(',');
				times++;
				continue;
			}
			if (value > 0 && times == 9)
			{
				_putchar(' ');
				_putchar((value / 10) + 48);
				_putchar((value % 10) + 48);
				_putchar('$');
				times++;
				continue;
			}
			_putchar(' ');
			_putchar((value / 10) + 48);
			_putchar((value % 10) + 48);
			_putchar(',');
			times++;
			continue;
		}
		table++;
	}	
}
