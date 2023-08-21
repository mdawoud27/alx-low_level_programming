#include "main.h"
#include <string.h>

/**
 * _strcat - append string src to dest string
 * @dest: string
 * @src: string
 *  Return: ponting to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
