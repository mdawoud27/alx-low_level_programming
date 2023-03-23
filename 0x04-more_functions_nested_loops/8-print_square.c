#include "main.h"

/**
 * print_square - A function that prints a square.
 * @size: the size of the square
 * Return: A square shape
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
