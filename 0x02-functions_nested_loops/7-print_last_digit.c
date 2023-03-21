#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: variable that check on it
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if ((n % 10) < 0)
		(n % 10) *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
