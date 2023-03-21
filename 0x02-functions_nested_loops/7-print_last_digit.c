#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: variable that check on it
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int tmp = n % 10;

	_putchar(tmp);
	return (n % 10);
}
