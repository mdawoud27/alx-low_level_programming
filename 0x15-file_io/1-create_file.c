#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, len = strlen(text_content);

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	write(f, text_content, len);
	close(f);

	return (1);
}
