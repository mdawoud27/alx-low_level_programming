#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *buffer, int num_bytes);
/**
 * main - entry point to the program
 * @argc: num of arguments
 * @argv: array of char
 *
 * Return: 0 always wins
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n--)
	{
		printf("%02hhx%s", *ptr++, n ? " " : "\n");
	}
	return (0);
}
