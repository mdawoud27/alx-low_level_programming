#include "main.h"

/**
 * _strpbrk - function that searches a string for
 * any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	}
	return (0);
}
