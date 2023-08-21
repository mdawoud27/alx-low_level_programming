#include "main.h"
/**
 * _strncat - concat number of strings from src to dest
 * @dest: string
 * @src: string
 * @n: number of strings from src
 * Return: address of concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i, j;
	char *result;

	len = 0;
	i = 0;
	result = dest;
	for (j = 0; dest[j] != '\0'; j++)
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (result);
}
