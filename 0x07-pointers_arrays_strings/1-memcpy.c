#include "main.h"

/**
 * _memcpy - copy chars
 * @dest: where chars copied
 * @src: where chars come
 * @n: number of chars
 * Return: address of return;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
