#include "function_pointer.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int it;

	if (array == NULL || action == NULL)
		return;
	for (it = 0; it < size; it++)
		action(array[it]);
}
