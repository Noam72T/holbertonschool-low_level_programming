#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Function main
 * @argc: arg counter
 * @argv: arg value
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int file_from, file_to, bytes = 1024, num;
char buf[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = creat(argv[2], 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from), exit(99);
}
while (bytes == 1024)
{
bytes = read(file_from, buf, 1024);
if (bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
num = write(file_to, buf, bytes);
if (num < bytes)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (close(file_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
return (0);
}
