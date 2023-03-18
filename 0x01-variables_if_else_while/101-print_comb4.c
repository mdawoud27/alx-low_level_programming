#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of three digits.
 * Return: 0 always wins
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if ((i != j && j != k && k != i) && (j > i && j < k))
				{
					printf("%d%d%d", i, j, k);
					if (i == 7 && j == 8 && k == 9)
					{
						continue;
					}
					printf(", ");
				}
			}
		}
	}
	printf("\n");
	return (0);
}
