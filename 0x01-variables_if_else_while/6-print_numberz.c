#include <stdio.h>

/**
 * main - entry of program
 *
 * Description: prints 0 to 9 using ascii values
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
