#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str: array of char || string
 * Return: NULL if str == NULL
 */
char *_strdup(char *str)
{
	int i;
	char *new_str = malloc(sizeof(char) * strlen(str));

	if (strlen(str) == 0 || str == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
		new_str[i] = str[i];
	new_str[i] = '\0';

	return (new_str);
}
