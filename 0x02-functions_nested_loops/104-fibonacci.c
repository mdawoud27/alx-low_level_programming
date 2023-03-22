#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always wins
 */
int main(void)
{
	long int i, first = 0, second = 1, temp = 1;
	
	for (i = 1; i <= 98; i++)
	{
		temp = first + second;
		if (i != 98)
			printf("%ld, ", temp);
		else
			printf("%ld", temp);
		first = second;
		second = temp;
	}
	printf("\n");
	return (0);
}
