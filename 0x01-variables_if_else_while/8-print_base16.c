#include <stdio.h>

/**
 * main - entry point
 * numbers of base 16 in lowercase
 * Return: 0 always wins :)
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	for (ch = 'a'; ch <= 'f'; ch++)
		printf("%c", ch);
	ptintf("\n");
	return (0);
}
