#include "3-calc.h"

/**
 * op_add - function adding 2 integer numbers
 * @a: The first integer number
 * @b: The second integer number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subract 2 integer numbers
 * @a: The first integer number
 * @b: The second integer number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply 2 integer numbers
 * @a: The first integer number
 * @b: The second integer number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divid 2 integer numbers
 * @a: The first integer number
 * @b: The second integer number
 *
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function returns the remainder of the division of a by b
 * @a: The first integer number
 * @b: The second integer number
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
