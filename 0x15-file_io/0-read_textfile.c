#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_bytes;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	read_bytes = read(fd, &buf, letters);
	return (write(1, &buf, read_bytes));
	close(fd);
	free(buf);
}
