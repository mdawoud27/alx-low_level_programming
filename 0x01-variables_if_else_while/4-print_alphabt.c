#include <stdio.h>

/**
 * main - Entry point
 * Program prints all alphabet except 'q' and 'e'
 * Return: 0 always win
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		printf("%c", c);
	}
	printf("\n");
	return (0);
}
