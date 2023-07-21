#include <stdio.h>
#include "variadic_functions.h"

/**
 * printChar - print char
 * @form: form
 * Return: void
 */
void printChar(va_list form)
{
	int c = va_arg(form, int);

	printf("%c", c);
}

/**
 * printInt - print inf
 * @form: form
 * Return: void
 */
void printInt(va_list form)
{
	int num = va_arg(form, int);

	printf("%d", num);
}

/**
 * printFloat - print float
 * @form: form
 * Return: void
 */
void printFloat(va_list form)
{
	float num = va_arg(form, double);

	printf("%f", num);
}

/**
 * printString - print string literals
 * @form: form
 * Return: void
 */
void printString(va_list form)
{
	char *value = va_arg(form, char *);

	if (!value)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", value);
	}
}

/**
 * print_all - print all
 * @format: format specifier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list form;
	type_print value[] = {
		{"c", printChar},
		{"s", printString},
		{"f", printFloat},
		{"i", printInt},
		{NULL, NULL},
	};
	int i, j;
	char *separator;

	separator = "";
	i = 0;
	j = 0;

	va_start(form, format);
	while (format[i] && format)
	{
		while (value[j].s)
		{
			if (*value[j].s == format[i])
			{
				printf("%s", separator);
				value[j].func(form);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(form);
}
