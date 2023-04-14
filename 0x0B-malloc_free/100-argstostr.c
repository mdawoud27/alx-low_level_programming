#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - unction that concatenates all the arguments of your program.
 * @ac: no. of arguments
 * @av: array of char
 *
 * Return: new pointer of string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, idx = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[idx] = av[i][j];
			idx++;
		}
		new_str[idx] = '\n';
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
