#include <stdio.h>

/**
 * main - entry point
 * lowercase alphabet in reverse,
 * Return: 0 always wins
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		printf("%c", c);
	printf("\n");
	return (0);
}
