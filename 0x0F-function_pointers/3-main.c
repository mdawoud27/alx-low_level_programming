#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Program entry point
 * @argc: num of arguments
 * @argv: array of char with size argc
 *
 * Return: 0 always wins
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), n, m;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (!m && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(n, m));
	return (0);
}
