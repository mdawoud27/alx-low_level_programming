#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - unction that allocates memory for an array, using malloc.
 * @nmemb: n elements
 * @size: no. of bytes
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
