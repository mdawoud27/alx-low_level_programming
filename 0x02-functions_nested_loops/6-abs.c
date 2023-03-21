#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: variable that i check it
 * Return: the abs value of the number
 */

int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (n);
	else
		return (n * -1);
}
