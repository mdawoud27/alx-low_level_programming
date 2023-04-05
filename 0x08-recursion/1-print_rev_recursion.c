#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: sting
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
