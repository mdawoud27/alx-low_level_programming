#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 * Return: (n)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i)
		{
			if (j != i)
				_putchar(' ');
			else
				_putcgar('8');
		}
		_putchar('\n');
	}
}
