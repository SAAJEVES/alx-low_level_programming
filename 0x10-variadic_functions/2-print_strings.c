#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: demarcation
 * @n: number of strings literals
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *word;
	unsigned int i;

	i = 0;
	va_start(words, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(words, char *);
		if (!word)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(words);
}
