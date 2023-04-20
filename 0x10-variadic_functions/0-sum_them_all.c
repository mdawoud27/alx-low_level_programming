#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Fixed entered arguments
 *
 * Return: The sum of n numbers entered
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	while (i--)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
