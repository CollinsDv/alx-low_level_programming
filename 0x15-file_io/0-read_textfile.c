#include "main.h"

/**
 * read_textfile - reads and printss a file to POSIX
 *
 * @filename: pointer to file
 * @letters: number of characters to be read
 *
 * Return: number of successful characters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readfd;
	char *readfile;

	if (filename == NULL || letters == 0)
		return (0);

	readfile = malloc(sizeof(*readfile) * (letters + 1));
	if (readfile == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(readfile);
		return (0);
	}

	readfd = read(fd, readfile, letters);
	if (readfd < 0)
	{
		free(readfile);
		close(fd);
		return (0);
	}
	readfile[readfd] = '\0';

	write(1, readfile, readfd);
	free(readfile);

	close(fd);
	return (readfd);
}
