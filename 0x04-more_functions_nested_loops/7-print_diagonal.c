#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 * Return: (n)
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putcgar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
