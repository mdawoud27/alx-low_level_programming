#include "main.h"

/**
 * isPrime - Write a function that 
 * returns 1 if the input integer is a prime number, 
 * otherwise return 0
 * @n: A number
 * @i: A counter
 * Return: 1 if 0
 */

int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (isPrime(n, i - 1));
}
/**
 * is_prime_number - check if the number is prime of not
 * @n: A number
 * Return: 1 if true, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, n - 1));
}
