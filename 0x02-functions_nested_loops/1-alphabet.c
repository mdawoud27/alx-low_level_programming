#include "main.h"

/**
 * main - Entry point
 * print_alphabet - function that prints the alphabet, in lowercase
 * Return: 0 always wins
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
