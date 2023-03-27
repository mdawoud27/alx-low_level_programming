#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse.
 * @s: An ARRAY of char
 */

void print_rev(char *s)
{
	int i = 0, k;

	while (s[i] != '\0')
		i++;
	for (k = i - 1; k >= 0; k--)
		_putchar(s[k]);
	_putchar('\n');
}
