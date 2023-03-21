#include "main.h"

/**
 * print_sign - unction that prints the sign of a number.
 * @n: integer that check it
 * Return: 1 if n is greater than ZERO, -1 if n is leaa than ZERO,
 * and 0 if n = 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1');
		_putchar('\n');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		_putchar('\n');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar('0');
		_putchar('\n');
		return (0);
	}
}
