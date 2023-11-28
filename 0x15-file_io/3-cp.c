#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void close_file(int fd);
void print_error(const char *s, const char *file, int status);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, r, w;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        print_error("Usage: cp file_from file_to\n", NULL, 97);

    file_from = open(argv[1], O_RDONLY);
    if (file_from < 0)
        print_error("Error: Can't read from file %s\n", argv[1], 98);

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to < 0)
        print_error("Error: Can't write to %s\n", argv[2], 99);

    while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        w = write(file_to, buffer, r);
        if (w != r)
            print_error("Error: Can't write to %s\n", argv[2], 99);
    }

    if (r < 0)
        print_error("Error: Can't read from file %s\n", argv[1], 98);

    close_file(file_from);
    close_file(file_to);
    return (0);
}

/**
 * print_error - prints an error message and exits with a status
 * @s: string to print before the file name
 * @file: file name to print
 * @status: exit status
 */
void print_error(const char *s, const char *file, int status)
{
    if (file)
        dprintf(STDERR_FILENO, s, file);
    else
        dprintf(STDERR_FILENO, "%s", s);
    exit(status);
}

/**
 * close_file - closes a file descriptor and exits if failure
 * @fd: file descriptor
 */
void close_file(int fd)
{
    if (close(fd) < 0)
        print_error("Error: Can't close fd %d\n", NULL, 100);
}
