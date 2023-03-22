#include <stdio.h>

/**
 * main - Entry point
 * Fibonacci sequence
 * Return: 0 always wins
 */

int main(void)
{
	long int first = 0, second = 1, temp = 1, even_sum = 0, i;

	for (i = 1; ; i++)
	{
		if (temp > 4000000)
			break;
		temp = first + second;
		if (temp % 2 == 0)
			even_sum += temp;
		first = second;
		second = temp;
	}
	printf("%ld\n", even_sum);
	return (0);
}
