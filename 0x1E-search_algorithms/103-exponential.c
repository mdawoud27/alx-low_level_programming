#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not exists.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, high;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	high = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, high);
	result = binary_search(array + bound / 2, high - bound / 2 + 1, value);
	return ((result == -1) ? -1 : result + (int)(bound / 2));
}
