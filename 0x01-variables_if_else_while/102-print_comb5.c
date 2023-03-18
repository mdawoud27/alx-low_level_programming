#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers.
 * Return: 0 always wins
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				printf("%d%d %d%d", (i / 10), (i % 10), (j / 10), (j % 10));
				if (i != 98 || j != 99)
					printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
