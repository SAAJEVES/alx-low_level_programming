#include <stdio.h>

/**
 * main - prints all aruments it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always success (0)
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n != argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
