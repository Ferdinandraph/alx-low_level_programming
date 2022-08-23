#include "main.h"
/**
 * append_text_to_file - appending of the file
 * @filename: file name
 * @text_content: text content
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nl, rw, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
		rw = write(fd, text_content, nl);
		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
