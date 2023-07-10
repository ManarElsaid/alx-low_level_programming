#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: the string to write to the file 
 * Return: 1 on success & 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(fd, text_content, n);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
