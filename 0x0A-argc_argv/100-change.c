#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coint to make change for an amount
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 1 if error and 0 if successful
 */
int main(int argc, char *argv[])
{
	int value, n;

	if ((argc - 1) != 1)
	{
		printf("Error");
		return (1);
	}
	n = 0;
	value = atoi(argv[1]);
	while (value != 0)
	{
		if (value >= 25)
		{
			n = n + (value / 25);
			value = value % 25;
			continue;
		}
		if (value >= 10)
		{
			n = n + (value / 10);
			value = value % 10;
			continue;
		}
		if (value >= 5)
		{
			n = n + (value / 5);
			value = value % 10;
			continue;
		}
		if (value >= 2)
		{
			n = n + (value / 2);
			value = value % 2;
			continue;
		}
		if (value >= 1)
		{
			n = n + (value / 1);
			value = value % 1;
			continue;
		}
	}
	printf("%d\n", n);
	return (0);
}
