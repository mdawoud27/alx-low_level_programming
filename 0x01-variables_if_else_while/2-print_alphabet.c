#include <stdio.h>

/**
 * main - Entery Point
 *
 * Return: 0 always (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
