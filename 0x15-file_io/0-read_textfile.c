#include "main.h"

#define BUFF 1024

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_out, prt_letters;
	char *file = malloc(sizeof(char) * letters);

	if (filename == NULL || !file)
		return (0);
	fd_out = open(filename, O_RDONLY);
	if (fd_out == -1)
	{
		free(file);
		return (0);
	}
	prt_letters = read(fd_out, file, letters);
	prt_letters = write(STDOUT_FILENO, file, prt_letters);
	close(fd_out);
	return (prt_letters);
}
