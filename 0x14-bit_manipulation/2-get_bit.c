#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: entered number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *temp = binary_to_str(n);

	if (index > sizeof(n) * 8)
		return (-1);
	return (temp[index] - '0');
}

/**
 * binary_to_str - Convert binary into string of 0 & 1
 * @n: entered number
 *
 * Return: binary string of Number n in REVERSE!
 * take care the binary number is reversed!
 */
char *binary_to_str(unsigned long int n)
{
	char *str = malloc(sizeof(char) * 33);
	int len = 0;

	if (n == 0)
		return (0);

	while (n > 0)
	{
		str[len++] = (n & 1) + '0';
		n >>= 1;
	}
	str[len] = '\0';
	return (str);
}
