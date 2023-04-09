#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 *
 * @argc: A number of arguments
 * @argv: An array of pointer string
 * Return: 0 always wins
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
}
