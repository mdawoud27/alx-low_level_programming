#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: number of times the character '_' should be printed
 * Return: n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
