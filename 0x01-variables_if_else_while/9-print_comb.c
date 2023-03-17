#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers.
 * Return: 0 always win :)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
		if (i != 9)
			printf(", ");
	}
	printf("\n");
	return (0);
}
