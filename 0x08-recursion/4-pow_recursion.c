#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 *
 * @x: number 1
 * @y: number 2
 * Return: power of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
