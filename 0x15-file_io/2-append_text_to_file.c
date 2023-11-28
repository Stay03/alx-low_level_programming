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
    ssize_t nwritten;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    /* If text_content is null, but file opened, return 1 */
    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    /* Write text_content to the file */
    nwritten = write(fd, text_content, strlen(text_content));
    if (nwritten == -1)
        status = -1;

    close(fd);
    return (status);
}
