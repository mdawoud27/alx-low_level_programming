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
	int i = 0, len = strlen(str) + 1;
	char *new_str;

	new_str = malloc((strlen(str) * sizeof(*str)) + 1);
	if (str == NULL || new_str == NULL)
		return (NULL);
	while (len--)
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
