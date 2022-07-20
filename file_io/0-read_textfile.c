#include "main.h"

/**
 * read_textfile - read
 * @filename: filename
 * @letters: letters
 * Return: yeet
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, counter;
	void *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	counter = read(fd, buff, letters);
	close(fd);
	return (write(1, buff, counter));
}
