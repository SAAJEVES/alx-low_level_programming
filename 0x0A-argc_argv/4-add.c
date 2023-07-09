#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds only positive numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: error (1) while success (0)
 */
int main(int argc, char *argv[])
{
	int n, value;

	n = 1;
	value = 0;

	while (n < argc)
	{
		if (atoi(argv[n]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		value += atoi(argv[n]);
		n++;
	}
	printf("%d\n", value);
	return (0);
}
