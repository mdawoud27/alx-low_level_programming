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

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
		return (printf("0\n"), 0);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
