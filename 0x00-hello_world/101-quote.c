#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that bla bla bla
 * write(int fd, const void *buffer*, size_t count)
 *
 * Return: Always 1 (not success)
*/

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, arr, 59);
	return (1);
}
