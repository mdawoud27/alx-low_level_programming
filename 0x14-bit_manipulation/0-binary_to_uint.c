#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b), sum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (len--)
	{
		if (isalpha(b[len]))
			return (0);

		if (b[len] == '1')
			sum += pow(2, i);
		i++;
	}

	return (sum);
}
