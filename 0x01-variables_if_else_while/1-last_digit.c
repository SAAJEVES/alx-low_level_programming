#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Main - entry point
 *
 * Description : carries out a check on the last digit of generated
 *	number
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lstNum = n % 10;

	if (n < 6 && n > 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lstNum);
	}
	else if (n > 5)
	{
		printf("last digit of %d is %d and is  greater than 5\n", n, lstNum);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lstNum);
	}
	else
	{
		printf("last digit of %d is %d and is less than 0\n", n, lstNum);


	return (0);
}
