#include "main.h"

/**
 * _islower(int c)- function that checks for lowercase character.
 * @c: char which we will check it
 * Return: 1 if char is lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
