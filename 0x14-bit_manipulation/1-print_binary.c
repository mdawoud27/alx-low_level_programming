#include "main.h"

#define uli unsigned long int
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: An unsigned long int number
 * 
 * Return: void
 */
void print_binary(unsigned long int n)
{
    int bit = 0;

    while ((n >> bit) > 1)
        bit++;

    while (bit >= 0)
    {
        ((n >> bit) & 1) ? putchar('1') : putchar('0');
        bit--;
    }
}