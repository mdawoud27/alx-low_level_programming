#include "main.h"

/**
 * _puts_recursion - function that prints a string, 
 * followed by a new line.
 * @s: array of char
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
