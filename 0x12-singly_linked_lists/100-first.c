#include <stdio.h>

/*Constractor*/
void __attribute__((constructor)) print();

/**
 * print - function prints a string
 * before the main function is executed.
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
