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
	int i, len;
	char *new_str;

	if (str == NULL)
		return (0);
	len = strlen(str) + 1;
	new_str = malloc(sizeof(*str) * len);
	if (new_str == NULL)
		return (0);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	return (new_str);
}
