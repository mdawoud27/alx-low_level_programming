#include "main.h"

/**
 * main - Entry point
 * prints by _putchar
 * Return: 0 always wins
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
