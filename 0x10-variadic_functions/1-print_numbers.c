#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints integers passed to the function
 * @separator: what to separate the integers
 * @n: designated numbers of arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int value;

	if (n == 0)
		return;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		if (i == (n - 1))
		{
			printf("%d\n", value);
			continue;
		}
		printf("%d", value);
		if (separator == NULL)
		{
			printf(" ");
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(list);
}
