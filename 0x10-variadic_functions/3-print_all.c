#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing || void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list all;

	va_start(all, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(all, double));
				break;
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
