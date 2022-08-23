#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it
 * @filename: file name
 * @letters: number of letters
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);
	return (wr);
}
