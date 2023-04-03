#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that sets the value of a pointer to a char
 * @a: pointer int
 * @size: int size
 *
 * Return: 0 always wins
 */

void print_diagsums(int *a, int size)
{
	int i, j, val_1 = 0, val_2 = 0, limit = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				val_1 += *(a + ((i * size) + j));
			}
			if ((size - limit) == j)
			{
				val_2 += *(a + ((i * size) + j));
				limit++;
			}
		}
	}
	printf("%d, %d\n", val_1, val_2);
}
