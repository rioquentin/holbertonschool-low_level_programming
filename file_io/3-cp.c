#include "main.h"

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
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	len = read(fd, buf, 1024);
	if (len == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(fd);
	if (close == -1)
	{
		dprintf(2, "Can't close fd %i\n", fd);
		exit(100);
	}

	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	wr = write(fd, &buf, len);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	close(fd);
	return (0);
}
