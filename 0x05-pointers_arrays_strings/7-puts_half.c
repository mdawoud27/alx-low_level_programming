#include "main.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: An array of char
 */

void puts_half(char *str)
{
	int i = 0, n,  k;

	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n /= 2;
	for (k = n; k <= i; k++)
		_putchar(str[k]);
	_putchar('\n');
}
