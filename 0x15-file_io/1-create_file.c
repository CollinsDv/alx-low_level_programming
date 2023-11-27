#include "main.h"

/**
 * create_file - creates a new file and writes content in it
 *
 * @filename: the file to be created
 * @text_content: text to be filled in the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd1;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL);
	if (fd < 0)
		return (-1);

	fd1 = write(fd, text_content, strlen(text_content));
	if (fd1 < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
