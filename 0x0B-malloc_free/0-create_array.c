#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function creates an array of char
 * @size: size of the array
 * @c: char
 * Return: NULL if size = 0 || return a pointer
 */
char *create_array(unsigned int size, char c)
{
	int i, n = size;
	char *array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (0);
	for (i = 0; i < n; i++)
		array[i] = c;
	array[i] = '\0';
	return (array);
}
