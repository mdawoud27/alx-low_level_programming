#include "main.h"

/**
 * main - Entry point
 * prints by _putchar function
 * Return: 0 always wins
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
