#include "main.h"
/**
 * create_file -  a function that creates a file
 * @filename: file name
 * @text_content: content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int rw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (nl = 0; text_content[nl]; nl++)
		;
	rw = write(fd, text_content, nl);
	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}
