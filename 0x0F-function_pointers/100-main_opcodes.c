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
	if (argc != 2)
		return (printf("Error\n"), 1);

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
		return (printf("Error\n"), 2);

	char *buffer = (char *) main;

	print_opcodes(buffer, num_bytes);
	return (0);
}

/**
 * print_opcodes - a function prints the opcodes
 * @buffer: buffer
 * @num_bytes: num of bytes
 */
void print_opcodes(char *buffer, int num_bytes)
{
	int it;

	for (it = 0; it < num_bytes; it++)
		printf("%02hhx", buffer[it]);
	printf("\n");
}
