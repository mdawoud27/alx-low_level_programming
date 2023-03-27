#include "main.h"

/**
 * reset_to_98 - A function that takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: variable
 * Return: void
 */
void reset_to_98(int *n)
{
	int return_value = 98;
	return_value = *n;
	_putchar(9 + '0');
	_putchar(8 + '0');
}
