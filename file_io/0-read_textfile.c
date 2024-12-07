#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Function Read
 * @filename: pointers
 * @letters: letters
 * Return: The number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int files;
    ssize_t let, read_bytes;
    char *text;

    if (filename == NULL)
        return (0);

    text = malloc(letters);
    if (text == NULL)
        return (0);

    files = open(filename, O_RDONLY);
    if (files == -1)
    {
        free(text);
        return (0);
    }

    let = read(files, text, letters);
    if (let == -1)
    {
        free(text);
        close(files);
        return (0);
    }

    read_bytes = write(STDOUT_FILENO, text, let);
    if (read_bytes == -1 || read_bytes != let)
    {
        free(text);
        close(files);
        return (0);
    }

    free(text);
    close(files);

    return (read_bytes);
}