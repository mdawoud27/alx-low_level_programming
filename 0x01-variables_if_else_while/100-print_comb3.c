#include <stdio.h>

/**
 * main - entry point
 * prints all possible different combinations of two digits
 * Return: 0 always wins
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i < j && i != j)
			{
				printf("%d%d", i, j);
				if (!((i == 8) && (j == 9)))
				{
					printf(", ");
				}
			}
		}
	}
	printf("\n");
	return (0);
}
