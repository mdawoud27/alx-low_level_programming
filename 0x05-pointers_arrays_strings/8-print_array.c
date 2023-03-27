#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints an Array
 * @a: An array
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", s[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
