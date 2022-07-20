#include "main.h"

/**
 * append_text_to_file - function
 * @filename: file name
 * @text_content: text
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);
	for (size = 0; text_content[size]; size++)
		;

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	write(fd, text_content, size);
	close(fd);
	return(1);
}
