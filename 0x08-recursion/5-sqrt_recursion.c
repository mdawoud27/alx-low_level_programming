#include "main.h"

/**
 * _sqrt - fint aqrt
 * @n: number
 * @i: number
 * Return: number
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - sqrt of number
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
