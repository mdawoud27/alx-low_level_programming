#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character that we check
 * Return: 1 if 'c' is uppercase, and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
