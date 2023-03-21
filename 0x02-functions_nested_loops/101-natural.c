#include <stdio.h>

/**
 * main - Entry point
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 always wins
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("\n");
	return (0);
}
