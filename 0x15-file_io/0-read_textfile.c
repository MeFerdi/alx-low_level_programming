#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes, r;

	if (filename)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = nmalloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (bytes);
}
