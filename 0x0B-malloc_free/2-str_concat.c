#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - unction that concatenates two strings.
 * @s1: array of char
 * @s2: array of char
 * Return: NULL on failure otherwise new_string
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i, j;
	char *new_str;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);
	if (s1 == NULL && s2 == NULL)
		len_s1 = len_s2 = 0;
	new_str = malloc(((len_s1 + len_s2) * sizeof(char)) + 1);
	if (new_str == NULL)
		return (0);
	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
