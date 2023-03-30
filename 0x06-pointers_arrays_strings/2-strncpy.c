#include "main.h"

/**
 *_strncpy - copy number of strings from src to dest
 * @dest: string
 * @src: string
 * @n: number of strings
 * Return: address to copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result;
	int i;

	i = 0;
	result = dest;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (result);
}
