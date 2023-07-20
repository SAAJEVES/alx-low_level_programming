#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - summ all arguments passed
 *
 * @n: number of arguments to be passed
 *
 * Return: returns an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list args;

	i = 0, total = 0;
	if (n == i)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		total += va_arg(args, int);
	va_end(args);
	return (total);
}
