#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: An ARRAY of char.
 */

void rev_string(char *s)
{
	int i = 0, k;

	while (s[i] != '\0')
		i++;
	for (k = i - 1; k >= 0; k--)
		_putchar(s[k]);
	_putchar('\n');
}
