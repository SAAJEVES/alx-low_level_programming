#include <stdio.h>
#include <stdlib.h>


/**
 * changeCoin - gets the number of coins
 *
 * coin: amount
 *
 * Return: the number of times
 */
int changeCoin(int coin)
{
	int num = 0;

	while (coin != 0)
	{
		if (coin < 0)
		{
			coin = 0;
			continue;
		}
		if (coin >= 25)
		{
			num = num + (coin / 25);
			coin = coin % 25;
			continue;
		}
		if (coin >= 10)
		{
			num = num + (coin / 10);
			coin = coin % 10;
			continue;
		}
		if (coin >= 5)
		{
			num = num + (coin / 5);
			coin = coin % 5;
			continue;
		}
		if (coin >= 2)
		{
			num = num + (coin / 2);
			coin = coin % 2;
			continue;
		}
		if (coin >= 1)
		{
			num = num + (coin / 1);
			coin = coin % 1;
			continue;
		}
	}
	return (num);
}

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
	int value;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);

	amount = changeCoin(value);

	printf("%d\n", amount);
	return (0);
}
