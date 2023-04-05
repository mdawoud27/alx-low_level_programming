#include "main.h"

/**
 * _pow_recursion - return pow of number
 * @x: number 1
 * @y: number 2
 * Return: pow of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
