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
	if (argc > 1  && argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
