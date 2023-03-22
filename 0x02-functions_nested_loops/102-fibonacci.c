#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always wins
 */

int main(void)
{
	int i, first = 0, second = 1, temp = 1;

	for (i = 1; i <= 50; i++)
	{
		temp = first + second;
		printf("%lld", temp);
		first = second;
		second = temp;
	}
	printf("\n");
	return (0);
}
