#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings,
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void || Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (i == n - 1)
			break;
		if (!separator)
			continue;
		printf("%s", separator);
	}
	printf("\n");
}
