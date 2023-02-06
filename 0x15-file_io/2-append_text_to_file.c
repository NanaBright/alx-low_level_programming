#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 if file exist then -1 if it fails/not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int y;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x]; xs++)
			;

		y = write(fd, text_content, x);

		if (y == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
