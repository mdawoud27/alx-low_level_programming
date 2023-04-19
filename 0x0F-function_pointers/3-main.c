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
	int n1, n2, res;
	char *ope;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	ope = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(ope) == NULL || ope[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(ope)(n1, n2);

	printf("%d\n", res);
	return (0);
}
