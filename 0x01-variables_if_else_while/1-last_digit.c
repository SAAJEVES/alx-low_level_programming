#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Main - entry point
 * Description - carries out a chck on the last digit of genreated number
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

	if (n < 6 && n > 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else if (n > 5)
	{
		printf("last digit of %d is %d and is  greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastDigit);
	}


	return (0);
}
