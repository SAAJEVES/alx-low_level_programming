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

	i = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		printf("%d", value);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
