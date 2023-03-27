#include "main.h"

/**
 * reset_to_98 - A function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: variable
 * Return: void
 */

void reset_to_98(int *n)
{
	int value = 98;

	value = *n;
	_putchar((value / 10) + '0');
	_putchar((value % 10) + '0');
}
