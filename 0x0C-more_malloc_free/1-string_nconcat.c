#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: array of char
 * @s2: array of char
 * @n: no. of bytes
 * Return: string pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2, len;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		len = len_s1 + len_s2;
	else
		len = len_s1 + n;
	new_str = malloc(len * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len - len_s1; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
