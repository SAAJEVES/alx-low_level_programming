#include <stdio.h>

/**
 * main - Entry of programme
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
