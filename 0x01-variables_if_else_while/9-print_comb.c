#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		if (num == '9')
		{
			putchar(num);
			num++;
			break;
		}
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}

	return (0);
}
