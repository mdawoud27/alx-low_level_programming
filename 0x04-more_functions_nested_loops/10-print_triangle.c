#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: The size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size != 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i >= j)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	_putchar('\n');
}
