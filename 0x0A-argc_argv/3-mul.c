#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always success (0)
 */
int main(int argc, char *argv[])
{
	int n = 1;
	int value = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	while (n != argc)
	{
		int num = atoi(argv[n]);

		value *= num;
		n++;
	}

	printf("%d\n", value);
	return (0);
}
