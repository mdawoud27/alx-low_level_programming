#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 *
 * Return: 0 always wins*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, length, len_s1 = strlen(s1), len_s2 = strlen(s2);
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len_s2)
		length = len_s1 + len_s2;
	else
		length = len_s1 + n;
	new_str = malloc(length + 1);
	if (new_str == NULL)
		return (0);
	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[1];
	for (j = 0; j < length - len_s1; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
