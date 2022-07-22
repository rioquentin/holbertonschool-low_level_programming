#include "main.h"
#include <stdio.h>

/**
 * custom_error
 * @filename: filename
 * @code: code
 * Return: void
 */
void custom_error(char *filename, int code)
{
	if (code == 97)
		dprintf(2, "Usage: file_from file_to");
	else if (code == 99)
		dprintf(2, "Error: Can't read from file %s\n", filename);
	else if (code == 98)
		dprintf(2, "Error: Can't write to %s\n", filename);
	exit(code);
}

/**
 * main - function
 * @ac: x
 * @av: x
 * Return: 1
 */

int main(int ac, char *av[])
{
	char buf[1024];
	int fd = 0, wr = 0;
	char *file_from, *file_to;
	ssize_t len = 0;

	if (ac != 3)
		custom_error("", 97);

	file_from = av[1];
	file_to = av[2];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		custom_error(file_from, 98);

	len = read(fd, buf, 1024);
	close(fd);

	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 664);
	if (fd == -1)
		custom_error(file_to, 99);
	wr = write(fd, &buf, len);
	if (wr == -1)
		custom_error(file_to, 99);

	close(fd);
	return (0);
}
