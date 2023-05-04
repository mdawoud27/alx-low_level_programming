#include "main.h"

/**
 * flip_bits - flips m bits
 * @n: decimal number
 * @m: number of bits you would need to flip
 *
 * Return: the number of bits you would need to flip to get from
 * one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number, i = 0;

	number = n ^ m;
	while (number >= 1)
	{
		if ((number & 1) == 1)
			i++;
		number >>= 1;
	}
	return (i);
}
