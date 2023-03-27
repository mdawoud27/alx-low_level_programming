#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: An integer variable
 * @b: An integer variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
