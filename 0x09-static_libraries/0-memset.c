#include "main.h"

/**
 * _memset - fill s with n number of b
 * @s: address of s
 * @b: char 'b'
 * @n: number
 * Return: char *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
