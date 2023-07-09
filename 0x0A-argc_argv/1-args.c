#include <stdio.h>

/**
 * main - prints the number of arguments passed into a program
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always success (0)
 */
int main(int argc, char *argv[])
{
	int n;

	n = argc - 1;
	if (argc > 1  && argv[0])
	{
		printf("%d\n", n);
	}
	return (0);
}
