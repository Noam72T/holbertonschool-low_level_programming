#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(const char *message, int code, const char *file_name);
void close_file(int fd);

/**
 * main - Function main.
 * @argc: Args Counter.
 * @argv: Args Value.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97, NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file", 98, argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit("Error: Can't write to", 99, argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit("Error: Can't write to", 99, argv[2]);
	}
	if (bytes_read == -1)
		error_exit("Error: Can't read from file", 98, argv[1]);

	close_file(file_from);
	close_file(file_to);

	return (0);
}
/**
 * error_and_exit - Function Error and exit.
 * @msg: Error mess.
 * @code: Code Error.
 * @file: Name of the file.
 */

void error_exit(const char *msg, int code, const char *file)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * close_file - Function close file.
 * @fd: file to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
