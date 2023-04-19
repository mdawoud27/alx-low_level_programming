#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t it;

	if (!size || !action)
		return;
	for (it = 0; it < size; it++)
		action(array[it]);
}
