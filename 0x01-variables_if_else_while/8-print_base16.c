#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alls the numbers of base 16 in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= 'f')
	{
		if (num >= ':' && num <= '`')
		{
			num++;
			continue;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
