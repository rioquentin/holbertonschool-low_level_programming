#include "main.h"

/**
 * create_file - function that create a file
 * @filename: name of the file
 * @text_content: the content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int rd, wr, fd, txtc;
	void *buff;

	if (filename == NULL)
		return (-1);

	fd = open(filename,  O_CREAT | O_TRUNC | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		txtc = open(text_content,  O_CREAT | O_TRUNC | O_RDWR);
		if (txtc == -1)
			return (-1);
		rd = read(txtc, buff, 0);
		if (rd == -1)
			return (-1);
		wr = write(fd, buff, 0);
		if (wr == -1)
			return (-1);
	}
	return (1);
}
