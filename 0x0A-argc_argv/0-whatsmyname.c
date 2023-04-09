#include <stdio.h>

/**
 * main - Entry point to the program
 * Program prints its name, followed by a new line.
 * @argc: A number of arguments
 * @argv: An array of pointer string
 * Return: 0 always wins
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
