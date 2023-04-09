#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * Program prints its name, followed by a new line.
 * @argc: A number of arguments
 * @argv: An array of pointer string
 * Return: 0 always wins
 */

int main(int argc, char **argv)
{
	int mult = 1;

	if (argc > 3 || argc < 3)
		printf("Error\n");
	else
	{
		mult *= atoi(argv[1]);
		mult *= atoi(argv[2]);
		printf("%d\n", mult);
	}

	return (0);
}
