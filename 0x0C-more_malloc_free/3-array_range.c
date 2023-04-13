#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: a num
 * @max: a num
 * Return: an array
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;
	return (array);
}
