#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status = 1;
	ssize_t nwritten, len = 0;

	if (!filename)
		return (-1);

	/* Open the file with the append flag, do not create if it does not exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is null, but file opened, return 1 */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		nwritten = write(fd, text_content, len);

		if (nwritten == -1)
			status = -1;
	}

	close(fd);
	return (status);
}
