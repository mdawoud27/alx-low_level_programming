#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: The name of the file
 * @text_content: the NULL terminated string to add at
 * the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = strlen(text_content);

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	write(f, text_content, len);
	close(f);

	return (1);
}
