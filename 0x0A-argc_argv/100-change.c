#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point to the program
 *
 * @argc: A number of arguments
 * @argv: An array of pointer string
 * Return: 0 always wins
 */

int main(int argc, char **argv)
{
	int cents, coin_cnt = 0, temp = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= coins[temp])
		{
			cents -= coins[temp];
			coin_cnt++;
		}
		else
			temp++;
	}
	printf("%d\n", coin_cnt);

	return (0);
}
