#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string of characters
 * @c: char
 * Return: string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
