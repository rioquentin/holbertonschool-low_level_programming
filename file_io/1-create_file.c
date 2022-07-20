#include "main.h"

/**
 * create_file - function that create a file
 * @filename: name of the file
 * @text_content: the content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int wr, i, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename,  O_CREAT | O_TRUNC | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	for (i = 0; text_content[i]; i++)
		;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
